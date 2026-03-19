## Binary to Hexadecimal

### Common DSA method

```cpp
string BinToHex(string s) {

    while (s.size() % 4 != 0)                                           // pad left with zeros to make length a multiple of 4
        s = "0" + s;

    const string hexDigits = "0123456789abcdef";
    string result = "";

    for (int i = 0; i < s.size(); i += 4) {
        int val = 0;
        for (int j = 0; j < 4; j++) {
            val = (val << 1) | (s[i + j] - '0');0)                      // 4-bit binary group → decimal
        }
        result += hexDigits[val];0)                                    // decimal → hex digit
    }

    return result;
}

// BinToHex("1010")     => "a"
// BinToHex("11111111") => "ff"
// BinToHex("1101")     => "d"
```
