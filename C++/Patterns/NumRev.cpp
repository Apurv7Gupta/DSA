/*

4 3 2 1 
4 3 2 1 
4 3 2 1 
4 3 2 1 


*/

    int n = 4;
    int count = 1;
    int row = 0;

    while (row <= n)
    {

        int col = 0;
        while (col <= n)
        {
            cout << n - col + 1 << " ";
            count++;
            col++;
        }

        cout << endl;
        row++;
}
