
    while (t--)
    {

        int n, x;
        cin >> n >> x;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        
        // --------------------------include start and end positions-----------------
        vector<int> brr;

        brr.push_back(0);

        for (int GasStations : arr)
            brr.push_back(GasStations);

        brr.push_back(x);
        // ---------------------------------------------------------------------------

        int biggest = 0;

        
        /*
        
        0 → 10 = 10
        10 → 20 = 10
        20 → 90 = 70
        90 → 100 = 10
        
        => max gap = 70 => min capacity of tank

        */
        
        for (int i = 0; i + 1 <= (int)brr.size() - 1; i++)
        {
            int diff = brr[i + 1] - brr[i];
            if (diff > biggest)
                biggest = diff;
        }

        cout << biggest << "\n";
    }
