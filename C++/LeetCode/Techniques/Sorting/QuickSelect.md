```cpp
class Solution {
public:
    int partition(vector<int>& nums, int left, int right) {
        // Randomize pivot to avoid worst-case O(n^2)
        int pivotIndex = left + rand() % (right - left + 1);
        swap(nums[pivotIndex], nums[right]);

        int pivot = nums[right];
        int i = left;

        for (int j = left; j < right; j++) {
            if (nums[j] <= pivot) {
                swap(nums[i], nums[j]);
                i++;
            }
        }

        swap(nums[i], nums[right]);
        return i;
    }

    int quickSelect(vector<int>& nums, int left, int right, int k) {
        if (left == right)
            return nums[left];

        int pivotIndex = partition(nums, left, right);

        if (pivotIndex == k)
            return nums[pivotIndex];
        else if (pivotIndex < k)
            return quickSelect(nums, pivotIndex + 1, right, k);
        else
            return quickSelect(nums, left, pivotIndex - 1, k);
    }

    int findKthLargest(vector<int>& nums, int k) {
        // Convert kth largest to kth smallest (0-indexed)
        int target = nums.size() - k;
        return quickSelect(nums, 0, nums.size() - 1, target);
    }
};
```
