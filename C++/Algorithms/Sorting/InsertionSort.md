1. Go Left -> Right

2. Take each element and compare it with elements on its Left

3. Swap it with the Left side elements until its in the correct position

4. Move to the next index (i = i+1)

5. Repeat

# Complexities$

- **Time Complexity**: O(n²)

- **Space Complexity**: O(1)

# Code

```cpp

void insertionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 1; i < n; i++) {          // start from second element
        int key = arr[i];                  // current element
        int j = i - 1;                    // element left of key

        // shift elements greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];           // move element right
            j--;
        }

        arr[j + 1] = key;                  // place key in correct position
    }
}

```

# Visualization

https://www.youtube.com/watch?v=JU767SDMDvA
