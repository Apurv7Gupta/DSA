/*

D
DC
DCB
DCBA

*/

 int n = 4;
    int row = 1;

    while (row <= n)

    {
        char letter = 'D';
        int col = 1;
        while (col <= row)
        {
            cout << letter;
            letter--;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
