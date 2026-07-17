void solve()
{

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    if (k == 1 && !is_sorted(arr.begin(), arr.end())) // If k == 1, we cannot really rearrange anything.
                                                      // So the array must already be sorted i that case.
        cout << "NO\n";
    else
        cout << "YES\n";
}
