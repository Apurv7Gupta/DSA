# Reverse an Integer

Extract the last digit

Shift place value

Remove last digit from number

Repeat till number number becomes zero

```cpp
int reverse(int number)
{

    int result = 0;

    while (number)          // repeat till (number != 0)
    {
        // extract last digit
        int digit = number % 10;
        // shift place value
        result = result * 10 + digit;
        // remove last digit from number
        number /= 10;
    }
    return result;
}

// cout<<reverse(394) => 493
```

# Variation: extract digits

```cpp

void ExtractDigits(int n){

    string extracted_digits;
    int temp = n;

        while (temp) {
            int digit = temp % 10;              // extract digits from the number
            temp /= 10;                         // tell the number digits have been extracted from it
            extracted_digits += to_string(digit);
            }
}
```
