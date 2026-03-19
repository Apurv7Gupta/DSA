## Any base to decimal (Reverse Horner's)

```cpp
string toBase(int n, int base) {
    if (n == 0) return "0";
    
    string result = "";
    const string digits = "0123456789abcdef"; // lookup for digits > 9
    
    while (n > 0) {
        result = digits[n % base] + result; // extract last digit and prepend
        n /= base;
    }
    
    return result;
}

// toBase(10, 2)  => "1010"
// toBase(10, 8)  => "12"
// toBase(255, 16) => "ff"
```
