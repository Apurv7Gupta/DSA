```cpp
int partition(int arr[], int s, int e)
{
    int pivot = arr[s]; // a

    int count = 0;

    // b
    for (int i = s + 1; i <= e; ++i)
    {
        if (arr[i] <= pivot)
            count++;
    }

    // c
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);
    // d

    // e
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)    // g
    {
        // e
        while (arr[i] <= pivot)
            ++i;

        while (arr[j] > pivot)
            --j;

        // f
        if (i < pivotIndex && j > pivotIndex)
            swap(arr[i++], arr[j--]);
    }

    return pivotIndex;
}



void quicksort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
        return;

    int p = partition(arr, s, e);

    // Left part
    quicksort(arr, s, p - 1);

    // Right part
    quicksort(arr, p + 1, e);
}
```

### How QuickSort works:

```
You take an element from the array (a PIVOT)

and you PARTITION it (place it in such a place that elements to its left are smaller than it & elements to its right are greater than it)

Recursively apply QuickSort to the left subarray.

Recursively apply QuickSort to the right subarray.

Stop when the subarray has 0 or 1 element (startIndex >= endIndex).
```

### How do you do partition?

```

a- You choose a pivot

b- you count elements smaller than it

c- If there are n smaller elements, then the pivot belongs after those n elements.
    so you swap the pivot with the element that is at that place

d- The pivot is now in its correct sorted position, but the elements on either
   side may still be mixed up (a larger element may be on the left and a smaller
   element may be on the right).

e- Use two pointers:
      i -> scan from the left until you find an element > pivot.
      j -> scan from the right until you find an element <= pivot.

f- Swap those misplaced elements.

g- Repeat until the pointers reach the pivot.

Now:
    All elements to the left of the pivot are <= pivot.
    All elements to the right of the pivot are > pivot.

The partition is complete, so return the pivot's index.
```

#### Visulization

```
https://www.youtube.com/watch?v=WprjBK0p6rw
```

T: O(n log n) average, O(n²) worst

S: O(log n) average, O(n) worst
