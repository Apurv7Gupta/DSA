## Any base to Decimal (Horner's method)

```cpp
int toDecimal(string s, int base)
{
    int result = 0;

    for (char c : s)
    {
        int digit = (c >= '0' && c <= '9') ? (c - '0') : (tolower(c) - 'a' + 10); // handles 0-9 and a-f
        result = result * base + digit;
    }

    return result;
}

// cout << toDecimal("1010", 2); => 10
```
