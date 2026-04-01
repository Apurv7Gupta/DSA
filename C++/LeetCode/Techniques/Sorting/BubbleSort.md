# Algorithm
In every $i^{th}$ round, you place the $i^{th}$ largest element in its correct place


# Code
```cpp

void bubbleSort(vector<int> &arr)
{

    for (int i = 0; i < arr.size() - 1; ++i)           // after each pass, the i-th largest element is placed at the end
    {

        for (int j = 0; j < arr.size() - i - 1; ++j)       // compares adjacent elements, ignoring last i elements already in correct position
        {

            if (arr[j] > arr[j + 1])                  // If current value is bigger than next, swap them
            {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

```

Time: O($n^{2}$)

Space: O($1$)



# Optimized

```cpp

void bubbleSort(vector<int> &arr)
{

    for (int i = 0; i < arr.size() - 1; ++i)           // after each pass, the i-th largest element is placed at the end
    {

        bool swapped = false;
        for (int j = 0; j < arr.size() - i - 1; ++j)       // compares adjacent elements, ignoring last i elements already in correct position
        {

            if (arr[j] > arr[j + 1])                  // If current value is bigger than next, swap them
            {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}

```

Time: 
    
    - **Best Case(already sorted)**: O($n^{2}$)
    
    - **Worst Case(reverse sorted)**: O($n$)


