### Divide until it’s one digit.

```cpp
int firstDigit = n;
while (firstDigit >= 10) {
    firstDigit /= 10;
}
```

### If n can be negative:

```cpp
int firstDigit = abs(n);
while (firstDigit >= 10) {
    firstDigit /= 10;
}
```

### Example

Take a number like 98765

Keep chopping off the last digit by dividing by 10 (ignore decimals):

98765 → 9876

9876 → 987

987 → 98

98 → 9

Now it’s a single digit → 9, that’s the first digit.
