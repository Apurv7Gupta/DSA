`&` = “WHERE is it?”

`&x = address of x`

`*` = “WHAT is it?”

`*x = value at the memory address stored in x`

`->` = “go there and get its field”

```cpp
ptr->value
//means (*ptr).value
```

| Concept           | Explanation                                                                                                                           |
| ----------------- | ------------------------------------------------------------------------------------------------------------------------------------- |
| Reference (`ref`) | Another name for a variable, no separate memory for the value itself. You use it exactly like the original variable.                  |
| Pointer (`ptr`)   | A variable that stores the **address** where the value lives in memory. To get the value, you have to **dereference** it with `*ptr`. |

==`int a = 5;`==
==`int b = 10;`==

==`int* ptr = &a;  // pointer to a`==
==`ptr = &b;       // now points to b`==

==`int& ref = a;   // reference to a`==
==`// ref = b;     // assigns b’s value to a (because ref is just an alias for a); the reference itself still refers to a and does not change what it’s bound to`.==

[Task Enviornments](https://img.playbook.com/8bZjgjH85p3FZQkjEo142waaFjSKv_KJYl8lEZd8ZEo/Z3M6Ly9wbGF5Ym9v/ay1hc3NldHMtcHVi/bGljLzYwOGZlNDhh/LTdjNDYtNGM2ZC1h/YzVjLWFiYmM0OTgz/NTU3MQ)
