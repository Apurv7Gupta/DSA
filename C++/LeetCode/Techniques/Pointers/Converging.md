```cpp
void sortZerosOnes(vector<int> &arr)
{
    int left = 0, right = arr.size() - 1;
    while (left < right)
    {
        while (left < right && arr[left] == 0)
            ++left; // skip correct 0s
        while (left < right && arr[right] == 1)
            --right; // skip correct 1s
        if (left < right)
            swap(arr[left++], arr[right--]);
    }
}
```

Pointers start from `Opposite Ends` and converge
