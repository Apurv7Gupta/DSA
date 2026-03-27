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