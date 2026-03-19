/*

ABC
ABC
ABC

*/


 int n = 3;

    int row = 1;

    int count = 0;

        while (row <= n)
    {
        int col = 1;
        char letter = 'A';

        while (col <= n)
        {
            cout << letter;
            letter++;
            col++;
        }
        cout << endl;
        row++;
    }
