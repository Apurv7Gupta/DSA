### Greatest Common Factor (Highest Common Divisor)

refers to the largest number that divides evenly into two or more numbers.

Example:

For 12 and 18:

`Factors of 12 → 1, 2, 3, 4, 6, 12`

`Factors of 18 → 1, 2, 3, 6, 9, 18`

The biggest factor they share is 6, so the GCF is 6.

Another way to think about it:

`It’s the biggest number you can pull out of multiple numbers without getting decimals or leftovers.`

```cpp

// Standard Euclidean Algorithm for GCD/GCF
int gcf(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << "GCF = " << gcf(a, b);

    return 0;
}

```

`input: 12 18`

`Output: GCF = 6`
