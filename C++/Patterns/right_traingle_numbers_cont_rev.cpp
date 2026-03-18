/*

1
21
321
4321

*/


    int n = 4;
    int row = 1;
    int count = 1;

    while (row <= n)
    {

        int col = 1;
        while (col <= row)
        {
            cout << row - col + 1;
            count++;
            col++;
        }
        cout << endl;
        row++;
        count = row;
    }
}
