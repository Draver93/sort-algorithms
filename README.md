# Sorting Algorithms Playground

This repository is a learning-focused project aimed at understanding and comparing different sorting algorithms in C++. The goal is to analyze their efficiency, execution time, and implementation details.

## Sorting Algorithms Implemented

The following sorting algorithms are included in this project:

- **Bubble Sort**
- **Insertion Sort (Type 1: Using erase and insert)**
- **Insertion Sort (Type 2: Using shifting)**
- **Selection Sort**
- **Merge Sort**
- **Quick Sort**
- **Heap Sort**
- **STL Sort (std::sort for comparison)**

## Performance Benchmarking

The program runs each sorting algorithm on a dataset of 10,000 randomly generated integers and measures execution time in milliseconds. This helps in understanding the efficiency of each algorithm in practical scenarios.

### Sample Execution Results:

| Sorting Algorithm | Execution Time (ms) |
|------------------|------------------|
| Bubble Sort | 1579 |
| Insertion Sort (Type 1) | 130 |
| Insertion Sort (Type 2) | 280 |
| Selection Sort | 554 |
| Merge Sort | 30 |
| Quick Sort | 27 |
| Heap Sort | 5 |
| STL Sort | 3 |

## How to Run the Code in Visual Studio

1. Clone the repository:
   ```sh
   git clone <repository-url>
   cd <repository-folder>
   ```
2. Open **Visual Studio** and load the project:
   - Open the `.sln` file included in the repository.
   - Ensure all necessary source files are added to the project.
3. Build the project:
   - Select **Build Solution** (Ctrl + Shift + B).
4. Run the executable:
   - Press **F5** to start debugging, or **Ctrl + F5** to run without debugging.

## Purpose

This repository is strictly for educational purposes, focusing on sorting algorithms, their performance, and learning how to implement them in C++. It is not meant for production use.

## Contributing

Contributions are welcome! If you'd like to add more sorting algorithms or optimizations, feel free to submit a pull request.

## License

This project is open-source and free to use for learning purposes.

