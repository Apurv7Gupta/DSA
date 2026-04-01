# Algorithm
1) Start with the first index (i = 0).

2) Assume the current position holds the minimum value.

3) Compare this value with the rest of the array (from i+1 to end).

4) Find the actual minimum element in the remaining unsorted part.

5) Swap the found minimum element with the element at index i.

6) Move to the next index (i = i + 1).

7) Repeat steps 2–6 until the entire array is sorted.

# Complexities
- **Time Complexity**: O(n²) always

- **Space Complexity**: O(1) (in-place)

- **Not stable** (unless modified)

Good for `small` data, bad for big data


# Code
```cpp
void selectionSort(vector<int> &arr)
{

 for (int i = 0; i < arr.size() - 1; ++i)           // going till second last element because last element doesnt need checking
    {

        int minIndex = i;                           // assume current index holds the minimum

        for (int j = i + 1; j < arr.size(); ++j)        // scan the remaining unsorted part (i+1 to end)
        {
            if (arr[minIndex] > arr[j])                // if a smaller element is found, update minIndex
            {
                minIndex = j;
            }
        }
        if (minIndex != i)                           // swap only if a smaller element was found
        {
            std::swap(arr[i], arr[minIndex]);
        }
    }

}
```
