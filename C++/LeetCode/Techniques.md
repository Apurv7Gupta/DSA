## Extract last number from a digit

Same idea exists for **any base**. `%` extracts the last unit of that base, `/=` removes it.

---

### Binary (base 2)

Used for **bits**.

| Operation | Purpose       |
| --------- | ------------- |
| `n & 1`   | read last bit |
| `n >>= 1` | drop last bit |

Example:

```cpp
int bit = n & 1;
n >>= 1;
```

---

### Decimal (base 10)

| Operation | Purpose         |
| --------- | --------------- |
| `n % 10`  | read last digit |
| `n /= 10` | drop last digit |

---

### Base 16 (hex)

| Operation | Purpose             |
| --------- | ------------------- |
| `n % 16`  | read last hex digit |
| `n /= 16` | drop last hex digit |

Example:

```cpp
int digit = n % 16;
n /= 16;
```

---

### General rule

For **any base `b`**:

| Operation | Meaning                       |
| --------- | ----------------------------- |
| `n % b`   | get last digit in base `b`    |
| `n /= b`  | remove last digit in base `b` |

---

### Bit trick equivalent (faster for base 2)

| Operation   | Purpose                                             |
| ----------- | --------------------------------------------------- |
| `n & 1`     | last bit                                            |
| `n >> 1`    | drop bit                                            |
| `n & (n-1)` | remove lowest (rightmost)  set bit (Kernighan Algo) |
## Kernighan Algo

Subtracting `1` from a number flips bits starting from the **rightmost `1`**.

Example:

n     = 1011000  
n - 1 = 1010111

Pattern:

xxxxx1000  
xxxxx0111

- the **rightmost `1` becomes `0`**
    
- everything to its right becomes `1`
    

Now apply `&`:

   1011000  
&  1010111  

=>   1010000

The **lowest `1` disappeared**.


These patterns show up everywhere in problems like:

- digit reversal
    
- palindrome numbers
    
- bit manipulation
    
- base conversions.

---

## Decimal to binary

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

---

Return 1's complement

Formula =  `mask = (1 << number_of_bits) - 1`

approach:

1) Find how many bits are used in n

    Example: 5 = `101` → 3 bits.

2) Create a mask with all 1s for that length

    For 3 bits → mask = `111` in binary → decimal 7.

3) XOR n with the mask

    complement = n ^ mask

This flips only the bits of n without touching leading zeros.



```cpp
int Complement(int n) {
    if (n == 0) return 1;  // edge case

    // Step 1: find number of bits in n
    int num_bits = 0;
    int temp = n;
    while (temp > 0) {
        temp >>= 1;       // shift right until all bits processed
        num_bits++;
    }

    // Step 2: create mask with all 1s in length of n
    int mask = (1 << num_bits) - 1;  // e.g., n=5 → 101 → mask=111 (using formula)

    // Step 3: XOR n with mask to flip bits (XOR flips all bits)
    return n ^ mask;
}
```
