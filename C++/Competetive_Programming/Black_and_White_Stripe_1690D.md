```cpp
void solve()
{
    // ==================inputs
    int no_of_elements;
    cin >> no_of_elements;
    int window_length;
    cin >> window_length;
    string chars;
    cin >> chars;
    // ==================

    int count = 0;
    int maxCount = 0;

    for (int i = 0; i < window_length; ++i)         // Count 'B's in the FIRST window only (0 to window_length - 1)
    {
        if (chars[i] == 'B')
            count++;
    }
    maxCount = count;

    for (int i = window_length; i < no_of_elements; ++i)      // Slide the window from index window_length to no_of_elements - 1
    {
        if (chars[i] == 'B')
            count++;
        if (chars[i - window_length] == 'B')
            count--;

        maxCount = max(count, maxCount);
    }

    cout << window_length - maxCount << "\n";
}
```

- Start the window at index 0 (covering indices 0 to window_length - 1).

- Slide the window rightwards by one element at each step.

- Track the maximum count of 'B's found in any window.

- Compute the answer:

The problem asks for the **minimum number of `'W'`s to recolor to `'B'`** to get a block of `window_length` consecutive `'B'`s.

Every window contains only two types of characters: `'B'` and `'W'`.

$$\text{Count of 'W'} + \text{Count of 'B'} = \mathit{window\_length}$$

Rearranging that:

$$\text{Count of 'W'} = \mathit{window\_length} - \text{Count of 'B'}$$

- `maxCount` represents the **maximum number of `'B'`s** found in any single window.
- To turn that best window into all `'B'`s, you only need to change its remaining characters (which are all `'W'`s).
- The number of `'W'`s in that best window is simply `window_length - maxCount`.

**Example:**

- `window_length = 5`
- Best window found: `"B W B B W"`
- `maxCount` (number of `'B'`s) = `3`
- Recolors needed = $5 - 3 = 2$ (the two `'W'`s).
