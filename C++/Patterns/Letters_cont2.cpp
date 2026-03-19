/*

ABC
BCD
CDE
DEF

*/

int n = 4;

    int row = 0;

    char letter = 'A';

    while (row < n)
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
        letter = 'A' + row;
    }
