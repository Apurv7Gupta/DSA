/*

   *
  **
 ***
****

*/

   int n = 4;
   int row = 1;

    while (row <= n)
    {
        int space = n - row; // row1 → 3 spaces, row2 → 2 spaces, row3 → 1 spaces, row4 → 0 spaces
        while (space != 0)
        {

            cout << " ";
            space--;
        }
        int col = 1;
        while (col <= row) // row1 → 1 star, row2 → 2 stars, row3 → 3 stars, row4 → 4 stars
        {

            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
