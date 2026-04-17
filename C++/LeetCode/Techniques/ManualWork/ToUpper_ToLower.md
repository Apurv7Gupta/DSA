```cpp
#include <iostream>

char convertToLower(char ch)
{

    if (ch >= 'A' && ch <= 'Z')
    {
        return ch - 'A' + 'a';
    }
    return ch; // Return as-is if it's not uppercase
}

char convertToUpper(char ch)
{

    if (ch >= 'a' && ch <= 'z')
    {
        return ch - 'a' + 'A';
    }
    return ch; // Return as-is if it's not lowercase
}

int main()
{
    char myLetter = 'B';
    char myOtherLetter = 'e';

    std::cout << "Lower version: " << convertToLower(myLetter) << std::endl;
    std::cout << "Upper version: " << convertToUpper(myOtherLetter) << std::endl;

    return 0;
}
```

### Explanation

#### 1. The Core Logic: The ASCII Offset

To understand how these formulas work, you need to know the relationship between uppercase and lowercase letters

in the ASCII table:

'A' has a value of 65, 'a' has a value of 97

`The Difference`: $97 - 65 = 32$

> Crucially, this offset of 32 is the same for every letter in the alphabet (e.g., 'B' is 66 and 'b' is 98).

#### 2. Breaking Down the Formulas

### Uppercase to Lowercase ($U \rightarrow L$)

`ch - 'A' + 'a'`

ch - 'A': This calculates the "index" of the letter. If ch is 'C' (67), then $67 - 65 = 2$. This tells the computer that 'C' is the 2nd letter after 'A' (starting from 0).

- 'a': This takes that index (2) and adds it to the starting point of the lowercase alphabet (97).

`Result`: $97 + 2 = 99$, which is the ASCII value for 'c'.

### Lowercase to Uppercase ($L \rightarrow U$)

`ch - 'a' + 'A'`

ch - 'a': This finds how far the lowercase letter is from the start of the lowercase set. If ch is 'e' (101), then $101 - 97 = 4$.

- 'A': This adds that distance (4) to the start of the uppercase set (65).

`Result`: $65 + 4 = 69$, which is the ASCII value for 'E'.
