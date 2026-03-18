/*

0 1 2 3
5 6 7 8
10 11 12 13
15 16 17 18

*/



    int n = 3;
    int count = 1;
    int row = 0;

    while (row <= n)
    {

        int col = 0;
        while (col <= n)
        {
            cout << row + count - 1 << " ";
            count++;
            col++;
        }

        cout << endl;
        row++;
    }
