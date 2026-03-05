| Concept           | Explanation                                                                                                                           |
| ----------------- | ------------------------------------------------------------------------------------------------------------------------------------- |
| Reference (`ref`) | Another name for a variable, no separate memory for the value itself. You use it exactly like the original variable.                  |
| Pointer (`ptr`)   | A variable that stores the **address** where the value lives in memory. To get the value, you have to **dereference** it with `*ptr`. |


==`int a = 5;`==
==`int b = 10;`==

==`int* ptr = &a;  // pointer to a`==
==`ptr = &b;       // now points to b`==

==`int& ref = a;   // reference to a`==
==`// ref = b;     // assigns b's value to a; ref still bound to a (passes b's value to a indirectly`)==

[Task Enviornments](https://img.playbook.com/8bZjgjH85p3FZQkjEo142waaFjSKv_KJYl8lEZd8ZEo/Z3M6Ly9wbGF5Ym9v/ay1hc3NldHMtcHVi/bGljLzYwOGZlNDhh/LTdjNDYtNGM2ZC1h/YzVjLWFiYmM0OTgz/NTU3MQ)
