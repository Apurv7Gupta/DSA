### Optimized

```cpp
    void Merge(vector<int>& nums, int start, int mid, int end,
               vector<int>& temp) {

        int i = start;
        int j = mid+1;
        int k = start;

        while (i <= mid && j <= end) {
            if (nums[i] <= nums[j]) {
                temp[k++] = nums[i++];
            } else {
                temp[k++] = nums[j++];
            }
        }

        while (i <= mid) {
            temp[k++] = nums[i++];
        }
        while (j <= end) {
            temp[k++] = nums[j++];
        }

        // copy back to original array
        for (int x = start; x <= end; ++x) {
            nums[x] = temp[x];
        }
    }

    void MergeSort(vector<int>& nums, int start, int end, vector<int>& temp) {

        if (start >= end) {
            return;
        }

        int mid = start + (end - start) / 2;

        MergeSort(nums, start, mid, temp);
        MergeSort(nums, mid + 1, end, temp);

        Merge(nums, start, mid, end, temp);
    }
// ------------------------------------------------
    vector<int> sortArray(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;

        vector<int> temp(nums.size());  // allocate ONCE

        MergeSort(nums, start, end, temp);
        return nums;
    }
```

### Easier to understand

```cpp

void Merge(int arr[], int start, int mid, int end)
{

    int n1 = mid - start + 1;
    // last - first + 1

    int n2 = end - mid;
    // end - (mid + 1) + 1
    // simplifies to end - mid

    vector<int> A(n1);
    vector<int> B(n2);

    for (int i = 0; i < n1; ++i)
    {
        A[i] = arr[start + i]; // copy left half from arr into temp array A
    }

    for (int i = 0; i < n2; ++i)
    {
        B[i] = arr[mid + 1 + i]; // copy right half from arr into temp array B
    }

    int i = 0;     // pointer for A
    int j = 0;     // pointer for B
    int k = start; // pointer for original array

    while (i < n1 && j < n2) // fill values in org array (smaller comes first)
    {

        if (A[i] <= B[j])
        {
            arr[k] = A[i];
            i++;
        }
        else
        {
            arr[k] = B[j];
            j++;
        }
        k++;
    }

    // if any one temp pointer exits first, then copy remaining values into org array

    while (i < n1)
    {
        arr[k] = A[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = B[j];
        j++;
        k++;
    }
}

void MergeSort(int arr[], int start, int end)
{

    if (start < end)
    {

        int mid = start + (end - start) / 2;
        MergeSort(arr, start, mid);   // left half
        MergeSort(arr, mid + 1, end); // right half

        // [start ........ mid] [mid+1 ........ end]

        Merge(arr, start, mid, end);
    }
}

```

### Visual

https://www.youtube.com/watch?v=4VqmGXwpLqc&pp=ygUKbWVyZ2Ugc29ydA%3D%3D

### Code Explanation

https://www.youtube.com/watch?v=4z9I6ZmeLOQ

### Complexities

t: O(nlogn)

s: O(n)

`n = no. of elements`

stability: stable

in-place: no
