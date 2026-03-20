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
---
### Explanation

`(c - '0')` is just ASCII trick to find wheather the bit is 0 or 1 `( 1 = 49 ascii, 0 = 48 ascii | difference = 1)`

`(result << 1)` this is just left shifting the number to make space for the next bit     `( This is just `$×2^{\text{n}}$` , just like it is done in the pen paper B2D method )`
