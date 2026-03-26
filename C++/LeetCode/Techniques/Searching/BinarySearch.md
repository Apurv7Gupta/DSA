### Common DSA method

```cpp
int binarySearch(const vector<int>& nums, int key) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // avoids overflow

        if (nums[mid] == key) {
            return mid;
        }
        else if (nums[mid] < key) {
            left = mid + 1;   // go right
        }
        else {
            right = mid - 1;  // go left
        }
    }

    return -1; // not found
}
```

### Brute-force method

```cpp
int binarySearch(int key, vector<int> &nums)
{

    int start = 0;
    int end = nums.size() - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        mid = start + (end - start) / 2;
        if (nums[mid] == key)
        {
            return mid;
        }
        if (nums[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return -1;
}


int main()

{

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int done = binarySearch(4, arr);

    cout << done;

    return 0;
}
```
