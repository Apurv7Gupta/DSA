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

void printArray(vector<int> &arr)
{

    for (int i = 0; i < arr.size(); i++)
    {

        cout << arr[i] << " ";
    }
}

int main()

{

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int done = binarySearch(4, arr);

    cout << done;

    // printArray(done);
    return 0;
}
```
