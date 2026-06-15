```cpp
#include <iostream>
using namespace std;

int countSteps(int src = 0)
{

    int dest = 10;

    if (src == dest)
        return 0;                           // From 10 to 10, there are 0 steps left.           <---------BASE CASE

    int remaining = countSteps(src + 1);    // move forward                                     <---------RECURSIVE CALL

    return remaining + 1;                   // count this move                                  <---------WORK
}

int main()
{
    cout << countSteps(0) << endl;
}
```

```
Call 1 starts

    Call 2 starts

        Call 3 starts
        Call 3 finishes

    Call 2 resumes
    Call 2 finishes

Call 1 resumes
Call 1 finishes
```
