# Return 1's complement

Formula =  `mask = (1 << number_of_bits) - 1`

approach:

1) Find how many bits are used in n

    Example: 5 = `101` → 3 bits.

2) Create a mask with all 1s for that length

    For 3 bits → mask = `111` in binary → decimal 7.

3) XOR n with the mask

    complement = $n^{\text{mask}}$

This flips only the bits of n without touching leading zeros.



```cpp
int Complement(int n) {
    if (n == 0)
        return 1; // edge case

    // Step 1: count number of bits in n
    int count = 0;
    int temp = n;
    while (temp > 0)
    {
        temp >>= 1; // shift right until all bits processed
        count++;
    }

    // Step 2: create mask with all 1s in length of n
   unsigned int mask = (1U << count) - 1; // using unsigned 1 so that it doesn't overflow the mask

    // Step 3: XOR n with mask to flip bits (XOR flips all bits)
    return n ^ mask;
}
```

or

```cpp

class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0) return 1;  // edge case

        int mask = 0;
        for (int temp = n; temp > 0; temp >>= 1) {
            mask = (mask << 1) | 1;  // build mask of all 1s
        }

        return ~n & mask;  // flip bits and mask
    }
};

```
