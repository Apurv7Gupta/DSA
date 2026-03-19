/*

A
BA
CBA
DCBA

*/

int n = 4;
    int row = 1;
    char letter = 'A';

    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << letter;
            letter--;
            col++;
        }
        cout << endl;
        letter = 'A' + row;
        row++;
    }
