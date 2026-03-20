# Binary to Decimal

### Common DSA method

```cpp
int BinToDec(const string &s) {
    int result = 0;

    for (char c : s) {   // For each char 'c' in string "s",
        result = (result << 1) | (c - '0'); // shift and add current bit
    }

    return result;
}

// cout << binaryToDecimal("1010"); => 10
```
