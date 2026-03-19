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
        int space = 0; // 0 , 1 , 2 , 3
        while (space < row)
        {
            cout << " ";
            space++;
        }
        int col = n - row;
        while (col)
        {
            cout << "*";
            col--;
        }
        cout << endl;
        row++;
    }
