In simple terms, [encapsulation](https://www.geeksforgeeks.org/cpp/encapsulation-in-cpp/) is defined as ==wrapping up data and information under a single unit==. 

In Object-Oriented Programming, encapsulation is defined as ==binding together the data and the functions that manipulate them together in a class==.  

(Just means:  ==creating a class and writing some functions(Methods) along with variables, etc. in it==) 

Consider an example of the Animal class, the data members species, age and name are encapsulated with the member functions like eat(), sleep, etc.

They can be protected by the access specifier which hides the data of the class from outside.

```cpp
#include <iostream>
using namespace std;

class Animal
{
  public:
    string species;
    int age;
    int name;

    // Member functions
    void eat()
    {
        // eat something
    }
    void sleep()
    {
        // sleep for few hrs
    }
    void makeSound()
    {
        // make sound;
    }
};

int main()
{
    Animal cat;
}
```
