Set the first element as the `current_mimnimum`

Find the element smaller than the `current_minimum` by comparing it with every element

If found, swap that element with the `current_minimum` => now that element is the new `current_minimum`

Move to the next index (i = i+1)

Repeat

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

# Visualization

https://www.youtube.com/shorts/Eyfbg0uEHXU

https://youtu.be/Iccmrk2ZWoc?si=7DcB4M5n3mVev2XF
