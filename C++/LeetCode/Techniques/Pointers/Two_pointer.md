```cpp
vector<int> applyOperations(vector<int> &nums)
{
    int idx = 0;

    for (int j = 0; j < nums.size(); ++j)
    {
        if (nums[j] != 0)
        {
            nums[idx++] = nums[j];
        }
    } // <-- for loop ends here

    while (idx < nums.size()) // <-- now runs AFTER full scan
    {
        nums[idx++] = 0;
    }

    return nums;
}
```

Generic code:

```cpp
// Two Pointer - Write Pointer Pattern
// Use when: filtering / rearranging an array in-place

int idx = 0; // write pointer

for (int i = 0; i < n; i++) {
    if (/* keep condition */) {
        nums[idx++] = nums[i];
    }
}
// optional: fill remainder
while (idx < n) nums[idx++] = fillValue;
```

Swap out `keep condition` and `fillValue` for whatever the problem needs.
