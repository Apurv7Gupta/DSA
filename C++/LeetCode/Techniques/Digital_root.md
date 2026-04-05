```cpp
int addDigits(int num)
{
    int digit = num;

    while (num >= 10)  // Run till num becomes a single digit
    {
        int sum = 0; // reset sum each round

        while (num)
        {
            digit = num % 10; // drop last digit
            sum += digit;     // add dropped digit
            num /= 10;        // Remove processed digit
        }
        num = sum; // feed sum back for next round
    }
    return num;
}

int main()
{

    cout << addDigits(38);
}
```
