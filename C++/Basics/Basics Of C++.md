
## STRUCTURE OF C++ PROGRAM

 - Include files (Header/Directive files)
 - Class declaration
 - Class functions, definition
 - Main function program

**Line-by-line explanation**:

- `// my first program in C++`  
    This is a **comment**. Anything after `//` is ignored by the compiler and is just for humans to read.
    
- `#include <iostream>`  
    This tells the compiler to include the **iostream** library, which handles input/output (like printing to the screen).
    
- `using namespace std;`  
    Allows you to use standard library features (like `cout`) without typing `std::` every time.
    
- `int main()`  
    The main function where the program starts running. Every C++ program must have this.
    
- `{ ... }`  
    Curly braces define the body of the `main` function — the actual code that runs.
    
- `cout << "Hello World!";`  
    Prints the text **Hello World!** to the screen. `cout` is the standard output stream.
    
- `return 0;`  
    Ends the program, returning 0 to the system, meaning everything went fine.

## TOKENS:

The ==smallest individual units in a program== are known as tokens. C++ has the following tokens.

i. `Keywords`
ii. `Identifiers`
iii. `Constants` ((including string literals))
iv. `Punctuators` (like `;`, `{`, `}`, etc.) 
v. `Operators`
vi. `Strings`
## KEYWORDS:

The keywords implement specific C++ language feature. They are explicitly reserved
identifiers and can’t be used as names for the program variables or other user defined program
elements.

C++ KEYWORDS (40):

| Keyword  | Keyword | Keyword   | Keyword  |
| -------- | ------- | --------- | -------- |
| asm      | double  | new       | switch   |
| Auto     | else    | operator  | template |
| Break    | enum    | private   | this     |
| case     | extern  | protected | throw    |
| catch    | float   | public    | try      |
| char     | for     | register  | typedef  |
| class    | friend  | return    | union    |
| const    | goto    | short     | unsigned |
| continue | if      | signed    | virtual  |
| default  | inline  | sizeof    | void     |
| delete   | long    | struct    | while    |

## IDENTIFIERS:

Identifier refers to the name of variable , functions, array, class etc. created by programmer. Each
language has its own rule for naming the identifiers.

The following rules are common for both C and C++:

1. Only alphabetic chars, digits and underscore are permitted.
2. The name can’t start with a digit.
3. Upper case and lower case letters are distinct.
4. A keyword cannot be used as an identifier.

In ANSI C the maximum length of a variable is 32 chars but in C++ there is no bar.

## Basic Data Types in C++:

![[Data_Types.png]]

Both C and C++ compilers support all the built-in types (including void).

Basic data types can have several modifiers to fit different needs.

The modifiers `signed`, `unsigned`, `long`, and `short` can be applied to character and integer types.

Additionally, the modifier `long` can also be applied to `double`.

## Data Type Ranges:

| Type              | Bytes | Range                           |
| ----------------- | ----- | ------------------------------- |
| char              | 1     | -128 to 127                     |
| unsigned char     | 1     | 0 to 255                        |
| signed char       | 1     | -128 to 127                     |
| int               | 2*    | -32,768 to 32,767               |
| unsigned int      | 2*    | 0 to 65,535                     |
| signed int        | 2*    | -32,768 to 32,767               |
| short int         | 2     | -32,768 to 32,767               |
| long int          | 4     | -2,147,483,648 to 2,147,483,647 |
| signed long int   | 4     | -2,147,483,648 to 2,147,483,647 |
| unsigned long int | 4     | 0 to 4,294,967,295              |
| float             | 4     | ~1.2E-38 to ~3.4E+38            |
| double            | 8     | ~2.3E-308 to ~1.7E+308          |
| long double       | 10*   | ~3.4E-4932 to ~1.1E+4932        |
_*Note:_ The size of `int` and `long double` can vary depending on the system and compiler. For example, on modern 64-bit systems, `int` is usually 4 bytes and `long double` can be 12 or 16 bytes. The values here reflect older/common defaults.

## Inline Functions

- An **inline function** is a _normal_ function declared with the `inline` keyword, giving the compiler a **hint** to replace function calls with the actual function code at compile time.
    
- This avoids the overhead of a regular function call (jump and return), which can speed up small, frequently called functions.
    
- Example:
    
    ```cpp
    inline int add(int a, int b) {
        return a + b;
    }
    
    int main() {
        int sum = add(2, 3); // compiler may replace this with '2 + 3' directly
    }
    ```
    
- You **write** the function normally and **call** it normally.
    
- The difference is in compilation: the compiler tries to **insert the function code directly** at each call site.
    
- The `inline` keyword is **only a request**; the compiler can ignore it if:
    
    - The function is too large or complex.
        
    - Inlining would cause code bloat and hurt performance.
        
    - The function is recursive or not suitable for inlining.
        
- Excessive inlining can increase **compile time** and **binary size** due to code duplication.
    
- Modern compilers often decide automatically when to inline, so manually marking functions as `inline` is less common.
    

---

# Return Statement

- The `return` statement ends the execution of a function and optionally returns a value to the caller.
    
- Syntax:
    
    ```cpp
    return expression;  // returns the result of expression
    ```
    
- In the `main()` function, `return 0;` signals successful program termination.
    
- Functions with a non-void return type must return a value.
    
- Functions declared `void` can use `return;` without a value to exit early.
    
- Returning a value passes control and data back to the calling code.