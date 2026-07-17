void solve()
{

    int n, x;
    cin >> n >> x;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = max(arr[0], 2 * (x - arr.back()));
    // max among (distance b/w start and first gas station) & (distance b/w last gas station and destination), 2 times (roundtrip)

    /*

    Example: x = 100, stations = {10, 20, 90}
    - 0 to 10 = 10
    - 10 to 20: = 10
    - 20 to 90 = 70
    - 90 to 100 and back to 90 = 20 (10 out, 10 back)
    Final Ans: max(10, 20, 10, 70) = 70

    */

    for (int i = 1; i < n; i++)
        ans = max(ans, arr[i] - arr[i - 1]);

    cout << ans << "\n";
}
