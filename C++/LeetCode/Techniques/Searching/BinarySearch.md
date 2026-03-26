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
