

# Sorting Algorithm Performance Comparison

## Overview

This project compares the performance of two classic sorting algorithms: Merge Sort and Quick Sort. It generates a large array of random integers and measures the time taken by each sorting algorithm to sort the array. The results are printed to the console, along with samples of the array before and after sorting.

## Features

- Generates a large array of random integers.
- Implements Merge Sort and Quick Sort algorithms.
- Measures and compares the time taken by each sorting algorithm.
- Prints samples of the array before and after sorting.

## Files

- `main.c`: Contains the main program logic, including the implementation of Merge Sort, Quick Sort, array generation, and timing.
- `README.md`: This file.

## Prerequisites

- A C compiler (e.g., `gcc` or `clang`).

## Compilation

To compile the program, use the following command:

```bash
gcc -o sort_comparison main.c
```

This will generate an executable file named `sort_comparison`.

## Running the Program

To run the program, use the following command:

```bash
./sort_comparison
```

The program will execute, and you will see output similar to the following:

- A sample of the original array.
- The time taken for Merge Sort to sort the array.
- A sample of the array after Merge Sort.
- The time taken for Quick Sort to sort the array.
- A sample of the array after Quick Sort.

## Time Complexity

### Merge Sort
- **Best, Average, and Worst Case Time Complexity**: O(n log n)
- **Space Complexity**: O(n)
- **Stability**: Stable
- **When to Use**: Merge Sort is preferred for sorting linked lists and large arrays where stability is required. It is also useful when working with external sorting (i.e., when data is too large to fit into memory).

### Quick Sort
- **Best Case Time Complexity**: O(n log n) (when the pivot divides the array into nearly equal parts)
- **Average Case Time Complexity**: O(n log n)
- **Worst Case Time Complexity**: O(n^2) (when the pivot is the smallest or largest element)
- **Space Complexity**: O(log n) (due to recursion stack)
- **Stability**: Unstable
- **When to Use**: Quick Sort is often faster in practice compared to Merge Sort due to lower constant factors and cache efficiency. It is a good choice for arrays where stability is not a concern and memory usage is a concern.

## Output Example

```
Sample of original array:
First 10 elements: 1234 5678 2345 6789 3456 7890 4567 8901 5678 6789 
Last 10 elements: 1234 2345 3456 4567 5678 6789 7890 8901 9012 1234 

Merge Sort took 1.234567 seconds
Sample of array after Merge Sort:
First 10 elements: 1234 2345 3456 4567 5678 6789 7890 8901 9012 1234 
Last 10 elements: 1234 2345 3456 4567 5678 6789 7890 8901 9012 1234 

Quick Sort took 0.987654 seconds
Sample of array after Quick Sort:
First 10 elements: 1234 2345 3456 4567 5678 6789 7890 8901 9012 1234 
Last 10 elements: 1234 2345 3456 4567 5678 6789 7890 8901 9012 1234 
```

## Notes

- The program uses dynamically allocated memory for sorting and array storage.
- Ensure that you have enough memory available to handle the large array size.


```



