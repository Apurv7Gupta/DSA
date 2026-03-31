
```cpp
int FirstOccurence(vector<int> arr, int key)
{

    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {

            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int LastOccurrence(vector<int> arr, int key)
{

    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        mid = start + end;
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }

        else if (arr[mid] > key)
        {

            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
    }
    return ans;
}

//     vector<int> arr = {1, 2, 3, 4, 4, 4, 5, 6, 7, 8, 9};

int FIRST = FirstOccurence(arr, 4);
int LAST = LastOccurrence(arr, 4);

//     first occurence of 4 -> index 3
//     last occurence of 4 -> index 9

int total_occurrences = (LAST - FIRST) + 1;
```

---
# How to write compactly

```cpp
    int binarySearch(vector<int>& nums, int target, bool FirstOccurence) {    // Use separate function for Binary Search

        int start = 0;
        int end = nums.size() - 1;

        int ans = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                ans = mid;

                if (FirstOccurence) { // go left

                    end = mid - 1;
                }

                else // go right
                {

                    start = mid + 1;
                }
            }

            else if (nums[mid] < target) {

                start = mid + 1;
            } else {

                end = mid - 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {    // Just inject values into the function and get results returned

        int first = binarySearch(nums, target, true);
        int last = binarySearch(nums, target, false);

        return { first, last };
    }
};
```
