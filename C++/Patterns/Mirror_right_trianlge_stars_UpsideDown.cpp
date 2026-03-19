/*

****
***
**
*

*/

    int n = 4;

    int row = 0;

    while (row < n)
    {
        int col = n - row; // 4 - 0 , 4 - 1 , 4 - 2 , 4 - 3, 4 - 4
        while (col != 0)
        {
            cout << "*";
            col--;
        }
        cout << endl;
        row++;
    }
