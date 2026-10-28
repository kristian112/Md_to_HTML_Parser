# ⚡ Markdown to HTML CLI Converter

A lightweight, high-performance Command Line Interface (CLI) tool written in standard C++ that parses Markdown files and generates valid HTML. 

This project was built to demonstrate core C++ fundamentals, including memory-safe string manipulation, efficient File I/O streams, and modular CLI design without relying on heavy external dependencies.

## 🚀 Features

* **Zero External Dependencies:** Built entirely using the standard C++ library (`<iostream>`, `<fstream>`, `<string>`).
* **Memory Efficient:** Uses constant references (`const std::string&`) during parsing to eliminate unnecessary memory allocation and copying.
* **CLI-First Architecture:** Designed to accept command-line arguments, making it easy to integrate into larger bash scripts or automation pipelines.
* **Robust Error Handling:** Validates file streams and argument counts before execution to prevent memory leaks and crashes.
* **Current Parsing Support:** 
  * Headings (H1, H2, H3)
  * Standard Paragraphs
  * Empty line ignoring

## 🛠️ Tech Stack & Concepts Applied

* **Language:** C++ (Standard Library)
* **Core Concepts:** 
  * Memory Management (Pointers & References)
  * File Input/Output Streams (`std::ifstream`, `std::ofstream`)
  * String Manipulation & Substrings
  * CLI Argument Vector handling (`argc`, `argv`)

## 💻 How to Build and Run

### Compilation
You can compile the project using `g++` (or any standard C++ compiler):

```bash
g++ main.cpp -o md2html
