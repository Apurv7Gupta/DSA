Sorting algorithms are widely used in searching, databases, divide and conquer strategies, and data structures.

**Key Applications:**

- Organizing large datasets for easier handling and printing

- Enabling quick access to the k-th smallest or largest elements

- Making binary search possible for fast lookups in sorted data

- Solving advanced problems in both software and algorithm design

## Sorting Basics

**In-place Sorting**: uses ==constant space== for producing output (modifies the given array only.  

Examples: `Selection Sort`, `Bubble Sort`, `Insertion Sort` and `Heap Sort`.
Internal Sorting: Internal Sorting is when all the data is placed in the main memory or internal memory. In internal sorting, the problem cannot take input beyond allocated memory size.

**External Sorting** : External Sorting is when all the sorting data needs not to be placed in memory at a time.  

Used for the ==massive amount of data==. 

For example `Merge sort` can be used in external sorting as the whole array does not have to be present all the time in memory,

**Stable sorting**: When two same items appear in the same order in sorted data as in the original array called stable sort. 

Examples: `Merge Sort`, `Insertion Sort`, `Bubble Sort`.

**Hybrid Sorting**: A sorting algorithm is called Hybrid if it ==uses more than one standard sorting== 
==algorithms== to sort the array. 

The idea is to take advantages of multiple sorting algorithms. 

For Example: `IntroSort` uses Insertions sort and Quick Sort.

```
![[https://media.geeksforgeeks.org/wp-content/uploads/20250725152926737029/Advanced-Sorting-Algorithms.webp]]
```

## Comparison of Complexity Analysis of Sorting Algorithms:

| Name                                                                            | Best Case  | Average Case | Worst Case | Memory   | Stable | Method Used         |
| ------------------------------------------------------------------------------- | ---------- | ------------ | ---------- | -------- | ------ | ------------------- |
| [Quick Sort](https://www.geeksforgeeks.org/dsa/quick-sort-algorithm/)           | nlogn      | nlognnlogn   | n2n2       | lognlogn | No     | Partitioning        |
| [Merge Sort](https://www.geeksforgeeks.org/dsa/merge-sort/)                     | nlogn      | nlognnlogn   | nlognnlogn | n        | Yes    | Merging             |
| [Heap Sort](https://www.geeksforgeeks.org/dsa/heap-sort/)                       | nlogn      | nlognnlogn   | nlognnlogn | 1        | No     | Selection           |
| [Insertion Sort](https://www.geeksforgeeks.org/dsa/insertion-sort-algorithm/)   | n          | n2n2         | n2n2       | 1        | Yes    | Insertion           |
| [Tim Sort](https://www.geeksforgeeks.org/dsa/timsort/)                          | n          | nlognnlogn   | nlognnlogn | n        | Yes    | Insertion & Merging |
| [Selection Sort](https://www.geeksforgeeks.org/dsa/selection-sort-algorithm-2/) | n2         | n2           | n2         | 1        | No     | Selection           |
| [Shell Sort](https://www.geeksforgeeks.org/dsa/shell-sort/)                     | nlognnlogn | n4/3n4/3     | n3/2n3/2   | 1        | No     | Insertion           |
| [Bubble Sort](https://www.geeksforgeeks.org/dsa/bubble-sort-algorithm/)         | n          | n2n2         | n2n2       | 1        | Yes    | Exchanging          |
| [Cycle Sort](https://www.geeksforgeeks.org/dsa/cycle-sort/)                     | n2n2       | n2n2         | n2n2       | 1        | No     | Selection           |