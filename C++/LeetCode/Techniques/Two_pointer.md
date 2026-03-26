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
