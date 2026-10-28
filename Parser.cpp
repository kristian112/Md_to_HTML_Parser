#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//function to parse a line of markdown and convert it to HTML
string parseLine(const string& line) {
    if (line.empty()) {
        return "";
    }

    if (line.substr(0, 3) == "###") {
        return "<h3>" + line.substr(4) + "</h3>";
    } 
    else if (line.substr(0, 2) == "##") {
        return "<h2>" + line.substr(3) + "</h2>";
    } 
    else if (line.substr(0, 1) == "#") {
        return "<h1>" + line.substr(2) + "</h1>";
    }

    return "<p>" + line + "</p>";
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cerr << "Invalid arguments" << endl;
        cerr << "Usage: ./Parser <input_file.md> <output_file.html>" << endl;
        return 1;
    }

    string inputFileName = argv[1];
    string outputFileName = argv[2];

        ifstream inputFile(inputFileName);
    if (!inputFile.is_open()) {
        cerr << "Error: File " << inputFileName << " not found!" << endl;
        return 1;
    }

    ofstream outputFile(outputFileName);
    if (!outputFile.is_open()) {
        cerr << "Error: Could not create " << outputFileName << "!" << endl;
        return 1;
    }

    string currentLine;

    while (getline(inputFile, currentLine)) {
        string htmlLine = parseLine(currentLine);
        
        if (!htmlLine.empty()) {
            outputFile << htmlLine << endl;
        }
    }

    inputFile.close();
    outputFile.close();

    cout << "Success! File " << outputFileName << " has been generated." << endl;
    return 0;
}