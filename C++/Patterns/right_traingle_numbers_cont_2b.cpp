/*

1
23
345
4567

*/

int n = 4;
    int row = 1;

    while (row <= n)
    {

        int col = 1;
        while (col <= row)
        {
            cout << row + col - 1;
            col++;
        }
        cout << endl;
        row++;
    }
