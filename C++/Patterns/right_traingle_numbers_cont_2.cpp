/*

1
23
345
4567

*/

 int n = 4;
    int row = 1;
    int count = 1;

    while (row <= n)
    {

        int col = 1;
        while (col <= row)
        {
            cout << count;
            count++;
            col++;
        }
        cout << endl;
        row++;
        count = row;
    }

    return 0;
}
