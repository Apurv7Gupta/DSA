void Merge(vector<int> &nums, int start, int mid, int end,
           vector<int> &temp)
{

    int i = start;
    int j = mid + 1;
    int k = start;

    while (i <= mid && j <= end)
    {
        if (nums[i] <= nums[j])
        {
            temp[k++] = nums[i++];
        }
        else
        {
            temp[k++] = nums[j++];
        }
    }

    while (i <= mid)
    {
        temp[k++] = nums[i++];
    }
    while (j <= end)
    {
        temp[k++] = nums[j++];
    }

    // copy back to original array
    for (int x = start; x <= end; ++x)
    {
        nums[x] = temp[x];
    }
}

void MergeSort(vector<int> &nums, int start, int end, vector<int> &temp)
{

    if (start >= end)
    {
        return;
    }

    int mid = start + (end - start) / 2;

    MergeSort(nums, start, mid, temp);
    MergeSort(nums, mid + 1, end, temp);

    Merge(nums, start, mid, end, temp);
}

vector<int> sortArray(vector<int> &nums)
{
    int start = 0;
    int end = nums.size() - 1;

    vector<int> temp(nums.size()); // allocate ONCE

    MergeSort(nums, start, end, temp);
    return nums;
}