/*

if you got three consecutive dots "..."

then:

1) fill first and last indices of the three consec dots using Action 1 "W.W" -> middle dot fills automatically -> "WWW"

2) now you can just take the middle dot's water and fill any other cell using Action 2

This is why no matter what the string is, if you have "..." the answer will always be 2, because Action 1 will only be performed 2 times
And Action 2 is not counted

*/

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
        cout << 2 << "\n";

    else
    {
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '.')
                count++;
        }
        cout << count << "\n";
    }
}