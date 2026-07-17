void solve()
{
    // ================inputs==============
    int n;
    cin >> n;
    string s;
    cin >> s;
    // ====================================

    int count = 0;

    if (s.find("...") != string::npos)
        cout << 2;

    else
    {
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '.')
                count++;
        }
        cout << count;
    }
}