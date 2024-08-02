

### README

# Sorting Algorithms Comparison: Merge Sort vs Quick Sort

This project demonstrates the comparison of time complexity between two popular sorting algorithms: Merge Sort and Quick Sort. The program takes `n` elements from user input, sorts them using both algorithms, and measures the time taken for each sorting process.

## Code Explanation

### 1. **Main Function**

The main function is responsible for:
- Taking input from the user for the number of elements (`n`) and the elements themselves.
- Creating two arrays, `arr` and `arr_copy`, to store the elements.
- Timing the sorting process for both Merge Sort and Quick Sort.
- Printing the sorted arrays and the time taken for each sorting technique.

### 2. **Merge Sort Functions**

**`mergeSort` Function:**
- Recursively divides the array into two halves until it reaches individual elements.
- Calls the `merge` function to merge the sorted halves.

**`merge` Function:**
- Merges two subarrays into a single sorted array.
- Uses temporary arrays to store the subarrays and merges them back into the original array.

### 3. **Quick Sort Functions**

**`quickSort` Function:**
- Recursively sorts the array by dividing it into partitions.
- Uses the `partition` function to place the pivot element in its correct position.

**`partition` Function:**
- Selects the last element as the pivot and arranges all smaller elements to the left of the pivot and all larger elements to the right.
- Returns the index of the pivot element.

**`swap` Function:**
- Swaps two elements in the array.

### 4. **Helper Function**

**`printArray` Function:**
- Prints the elements of an array.

### How to Use

1. Clone the repository.
2. Compile the program using a C compiler (e.g., `gcc`).
   ```sh
   gcc sorting_comparison.c -o sorting_comparison
   ```
3. Run the executable.
   ```sh
   ./sorting_comparison
   ```
4. Enter the number of elements and the elements themselves when prompted.

## Analysis: Merge Sort vs Quick Sort

### Merge Sort
- **Time Complexity:** O(n log n)
- **Space Complexity:** O(n)
- **Best For:**
  - Linked lists, where it is easier to split and merge lists.
  - Large datasets where consistent O(n log n) performance is preferred.
  - Situations where stable sorting is required (i.e., elements with equal keys maintain their relative order).

### Quick Sort
- **Time Complexity:** 
  - Average: O(n log n)
  - Worst-case: O(n^2) (when the pivot elements are poorly chosen)
- **Space Complexity:** O(log n) (in-place sorting)
- **Best For:**
  - Arrays, as it sorts in place and requires less additional memory.
  - Situations where average-case performance is acceptable.
  - Performance-sensitive applications where in-place sorting reduces overhead.

### Choosing the Right Algorithm

- **Merge Sort** is generally better for:
  - Stable sorting requirements.
  - Larger datasets with consistent performance.
  - Linked lists.

- **Quick Sort** is generally better for:
  - In-place sorting with minimal additional memory.
  - Arrays.
  - Situations where the average-case performance is acceptable and optimization for the worst-case can be managed (e.g., by using randomized pivots).

By understanding the strengths and weaknesses of each algorithm, you can choose the one that best fits your specific scenario.

