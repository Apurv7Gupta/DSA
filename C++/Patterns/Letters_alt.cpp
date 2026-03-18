/*

AAA
BBB
CCC

*/


 int n = 3;

    string arr[] = {"A", "B", "C"};

    int row = 0;

    while (row < n)
    {

        int col = 0;
        while (col < n)
        {
            cout << arr[row];
            col++;
        }
        cout << endl;
        row++;
    }
