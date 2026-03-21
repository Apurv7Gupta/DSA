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

```text
    1011000
 &  1010111
   ----------
    1010000
```

The **lowest `1` disappeared**.


These patterns show up everywhere in problems like:

- digit reversal
    
- palindrome numbers
    
- bit manipulation
    
- base conversions.

---
