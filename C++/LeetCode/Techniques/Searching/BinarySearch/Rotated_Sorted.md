Monotonic function

Binary search

```cpp
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) {

            int mid = start + (end - start)/2;

            if (nums[mid] == target) { // if mid is the target
                return mid;
            }

            // If Left half sorted
            if (nums[start] <= nums[mid]) {

                if (nums[start] <= target &&
                    target < nums[mid]) // if target is between start & mid
                {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            }

            // If Right half sorted
            else {
                if (nums[mid] < target &&
                         nums[end] >= target){ // if target is between mid & end
                    start = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};
```
