```cpp
void dutchNationalFlag(vector<int>& arr) {
    int low = 0, mid = 0, high = arr.size() - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low++], arr[mid++]); // 0 goes to front
        } else if (arr[mid] == 1) {
            ++mid;                        // 1 is already in place
        } else {
            swap(arr[mid], arr[high--]);  // 2 goes to back, don't increment mid
                                          // (swapped element needs re-evaluation)
        }
    }
}
```

`mid` is the explorer — it scans every element exactly once. `low` and `high` are just boundary markers that expand their respective regions.
