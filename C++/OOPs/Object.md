
An  [object](https://www.geeksforgeeks.org/cpp/c-classes-and-objects/) is a real, ==usable instance of a class== that has specific properties and behaviors.

An object is created from a class.


****For example****, Animal is just an idea or blueprint, but a ****cat**** is a real object based on that class. 

So, classes are concepts, and objects are the actual things created from those concepts.  

==When you define a class, no memory is used. But when you create an object from that class, memory is allocated for it==, and it will have an associated address like a record in pascal or structure or union.

 When a program is executed, the ==objects interact by sending messages to one another==. 
 
 Each object contains data and code to manipulate the data. Objects can interact without having to know details of each other's data or code, it is sufficient to know the type of message accepted and the type of response returned by the objects.


You can create an object like this:

```cpp
#include <iostream>
using namespace std;

class Animal  // creating class named "Animal"
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
    Animal cat;   //creating object named "cat" from Animal class
}
```
​