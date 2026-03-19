/*

A
AB
ABC
ABCD

*/

 int n = 4;
    int row = 1;

    while (row <= n)
    {
        char letter = 'A';
        int col = 1;
        while (col <= row)
        {
            cout << letter;
            letter++;
            col++;
        }
        cout << endl;
        row++;
    }
