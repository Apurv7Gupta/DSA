## Message passing

It is ==the way objects communicate in OOP==.

Instead of calling functions directly, one object **sends a message** to another asking it to perform an action or provide data.

In languages like C++ or Java, this usually means:

- Calling a method on an object.
    
- The method name and parameters are the "message."
    
- The receiving object decides how to handle that message (which function to run).


Message passing involves specifying the ==name of the object==, the ==name of the function (message)== and ==information to be sent==.

It’s a core OOP concept that enables ==encapsulation, inheritance and polymorphism== — objects interact only through well-defined interfaces, not by messing with each other's internals.

In short: ==Message passing = invoking methods on objects==.


## Advantages & disadvantages of OOPs

| Advantages of OOPs                                                                                   | Disadvantages of OOPs                                                                                                                       |
| ---------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------- |
| OOPs provides enhanced code reusability.                                                             | The programmer should be well-skilled and should have excellent thinking in terms of objects as everything is treated as an object in OOPs. |
| The code is easier to maintain and update.                                                           | Proper planning is required because OOPs is a little bit tricky.                                                                            |
| It provides better data security by restricting data access and avoiding unnecessary exposure.       | OOPs concept is not suitable for all kinds of problems.                                                                                     |
| Fast to implement and easy to redesign resulting in minimizing the complexity of an overall program. | The length of the programs is much larger in comparison to the procedural approach.                                                         |
POPs:

In the procedure oriented approach, the problem is viewed as sequence of things to be done such as
reading , calculation and printing.
Procedure oriented programming basically consist of writing a list of instruction or actions for the
computer to follow and organizing these instruction into groups known as functions.

Characteristics of procedure oriented programming:
1. Emphasis is on doing things(algorithm)
2. Large programs are divided into smaller programs known as functions.
3. Most of the functions share global data
4. Data move openly around the system from function to function
5. Function transforms data from one form to another.
6. Employs top-down approach in program design

The disadvantage of the procedure oriented programming languages is:
1. Global data access
2. It does not model real word problem very well
3. No data hiding

## Paradigms Other than OOP

**1. Imperative Programming Paradigm**

It is a programming paradigm that works by changing the program state through assignment statements. 

The main focus in this paradigm is on how to achieve the goal. The following programming paradigms come under this category:

1. **Procedural Programming Paradigm**:  based on the procedure call concept. Procedures, also known as routines or functions are the basic building blocks of a program in this paradigm.

2. **Object-Oriented Programming or OOP**: In this paradigm, we visualize every entity as an object and try to structure the program based on the state and behavior of that object.

3. **Parallel Programming**: The parallel programming paradigm is the processing of instructions by dividing them into multiple smaller parts and executing them concurrently.



**2. Declarative Programming Paradigm**

Declarative programming focuses on what is to be executed rather than how it should be executed. In this paradigm, we express the logic of a computation without considering its control flow. The declarative paradigm can be further classified into:

1. **Logical Programming Paradigm**: It is based on formal logic where the program statements express the facts and rules about the problem in the logical form.

2. **Functional Programming Paradigm**: Programs are created by applying and composing functions in this paradigm.

3. **Database Programming Paradigm**: To manage data and information organized as fields, records, and files, database programming models are utilized.

## Advantage Over POPs (Procedure-Oriented Programming)

- ****Modularity and Reusability****: OOP promotes modularity through classes and objects, allowing for code reusability.

- ****Data Encapsulation****: OOP encapsulates data within objects, enhancing data security and integrity.

- ****Inheritance****: OOP supports inheritance, reducing redundancy by reusing existing code.

- ****Polymorphism****: OOP allows polymorphism, enabling flexible and dynamic code through method overriding.

- ****Abstraction****: OOP enables abstraction, hiding complex details and exposing only essential features


## Precursor to OOP

**Structured Programming**:

Usually consists of well-structured and separated modules. It is a subset of procedural programming. The difference between OOPs and Structured Programming is as follows:

| Object-Oriented Programming                                                                          | Structural Programming                                                                                                          |
| ---------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------- |
| Programming that is object-oriented is built on objects having a state and behavior.                 | A program's logical structure is provided by structural programming, which divides programs into their corresponding functions. |
| It follows a bottom-to-top approach.                                                                 | It follows a Top-to-Down approach.                                                                                              |
| Restricts the open flow of data to authorized parts only providing better data security.             | No restriction to the flow of data. Anyone can access the data.                                                                 |
| Enhanced code reusability due to the concepts of polymorphism and inheritance.                       | Code reusability is achieved by using functions and loops.                                                                      |
| Methods work dynamically, making calls based on object behavior and the need of the code at runtime. | Functions are called sequentially, and code lines are processed step by step.                                                   |
| Modifying and updating the code is easier.                                                           | Modifying the code is difficult as compared to OOPs.                                                                            |
| Data is given more importance in OOPs.                                                               | Code is given more importance.                                                                                                  |
## Class vs Structure

In C++, **classes** and **structures (structs)** are very similar, with only a few technical differences and some differences in typical usage and conventions.

## Key Differences Between Class and Structure in C++:

| Aspect                       | Class                                                                   | Structure (struct)                                                                   |
| ---------------------------- | ----------------------------------------------------------------------- | ------------------------------------------------------------------------------------ |
| **Default access modifier**  | Members are **private** by default                                      | Members are **public** by default                                                    |
| **Default inheritance mode** | Inherits **privately**                                                  | Inherits **publicly**                                                                |
| **Usage convention**         | Used for encapsulating data **and behavior** with data hiding           | Usually used as simple **data containers** (grouping variables)                      |
| **Member functions**         | Can have member functions and access control, constructors, destructors | Can also have member functions, constructors, destructors (same features as classes) |
| **Memory storage**           | Objects can be allocated on stack or heap (same for structs)            | Same as classes (no technical difference)                                            |
| **Terminology**              | Instances called **objects**                                            | Instances often called **structures** or just **structs**                            |

## Summary:

- The main difference is **default accessibility**: struct members are public by default, classes are private by default.
    
- Both can have constructors, destructors, member functions, inheritance, and all other features of C++ types.
    
- Structs are often used for plain data structures or POD (Plain Old Data), whereas classes are preferred when encapsulation and abstraction are needed.
    
- You choose based on intent and coding style, not functionality.
    

## Example:


```cpp
struct Point

{

    int x; // public by default

    int y;

};

class Rectangle

{

private:

    int width; // private by default

    int height;

  

public:

    void setDimensions(int w, int h)

  

    {

        width = w;

        height = h;

    }

};

```

This means in `Point`, `x` and `y` are public and accessible directly, while in `Rectangle`, members are private unless you make them public explicitly.

---

The differences mostly boil down to default member access and some conventional usage patterns. Functionally, classes and structs are nearly identical in C++.[](https://unstop.com/blog/difference-between-structure-and-class-in-cpp)