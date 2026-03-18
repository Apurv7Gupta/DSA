/*

AAA
BBB
CCC

*/

int n = 3;

    int row = 1;

    while (row <= n)
    {

        int col = 0;
        while (col < n)
        {
            char letter = 'A' + row - 1;
            cout << letter;
            col++;
        }
        cout << endl;
        row++;
    }
