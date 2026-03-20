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
# For DSA: add result overflow check


```cpp
int reverse(int number)
{

    int result = 0;

    while (number)
    {
        // extract last digit
        int digit = number % 10;
        // Check if result will overflow on next loop
        if (result > INT_MAX || result < INT_MIN)
        {
            return 0;
        }
        // shift place value
        result = result * 10 + digit;
        // remove last digit from number
        number /= 10;

        // repeat till number is zero
    }
    return result;
}
// cout<<reverse(394) => 493
```
