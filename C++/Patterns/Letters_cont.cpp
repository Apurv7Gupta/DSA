/*

ABC
DEF
GHI

*/


 int n = 3;

    int row = 1;

    int count = 0;

    char letter = 'A';

    while (row <= n)
    {
        int col = 1;

        while (col <= n)
        {
            cout << letter;
            letter++;
            col++;
        }
        cout << endl;
        row++;
        // count = row - 1;
    }
