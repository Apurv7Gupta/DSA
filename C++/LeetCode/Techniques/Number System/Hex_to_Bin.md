## Hexadecimal to Binary

### Common DSA method

```cpp
string hexToBinary(const string& s) {
    unordered_map<char, string> mp = {
        {'0', "0000"}, {'1', "0001"}, {'2', "0010"}, {'3', "0011"},
        {'4', "0100"}, {'5', "0101"}, {'6', "0110"}, {'7', "0111"},
        {'8', "1000"}, {'9', "1001"}, {'a', "1010"}, {'b', "1011"},
        {'c', "1100"}, {'d', "1101"}, {'e', "1110"}, {'f', "1111"}
    };

    string result = "";
    for (char c : s) {
        result += mp[tolower(c)];                                       // each hex digit = exactly 4 bits
    }

    return result;
}

// hexToBinary("ff")  => "11111111"
// hexToBinary("1a")  => "00011010"
```
