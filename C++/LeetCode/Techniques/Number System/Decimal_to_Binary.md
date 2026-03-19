# Decimal to binary

```cpp
string DecToBin(int n)
{

    string bin = "";

    if (n == 0)
        bin = "0";
    while (n > 0)
    {
        // adding '0' converts a number into its character version.
        bin = char((n % 2) + '0') + bin; // newest binary digit is placed at the beginning.
        n /= 2;
    }
    return bin;
}
```
