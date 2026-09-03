
# Chapter-01

## 1.1 - Statements and the Structure of a Program

- Disecting Hello World

```cpp
# include <iostream>
```

    - Preprocessor directive which indicates we would like  to use the contents of the `iostream` library
    - Need this to `std::cout`; Excluding this would result in a compile error


*Q1:* What is a statement?
- A statement is an instruction in a computer program that tells the computer to perform an action.

*Q2:* What is a function?
- A function is a colleciton of statements that executes sequentially.

*Q3:* What is the name of the function that all programs must have?
- main

*Q4:* What happens when the program is run?
- The statements inside `main()` are executed in sequential order.

*Q5:* What symbol are statements in C++ often ended with?
- A semicolon (`;`)

*Q6:* What is a syntax error?
- A syntax error occurs when your program violates the grammar rules of the C++ language.

*Q7:* What is the C++ Standard Library?
- A library file is a collection of precompiled code that has been "packaged up" for reuse in other programs. The C++ Standard Library is a library that ships with C++.It contains additional functionality to use in your programs.


## 1.3 - Introduction to Objects and Variables

- Data and Values

- Random Access Memory

    - RAM; When we run a program, the os laodsd the program into RAM. Any day that is hardcoded into the program itself is loaded at this point
    - OS also reserves some additional RAM for the program to use while it's running

- Objects and Variables

    - Direct memory access is discouraged. Instead access memory indirectly though an object
    - An object represents a region of storage that can hold avalue
    - *Key Insight:* An object is used ot store a value of memory. A variable is an object that has a name (identifier).

- Variable Definition

    - *Key Insight:* Tells compiler that we want to use a variable in our program.

    ```cpp
    int x;  // define variable named x of type int
    ```
    - Compiler makes note to itself that we want a variable with the name `x` and that it is of type `int`
    - Compiler handles all of the other details about this variable for us, including how much memeory the object will need, what kind of storage the object will be placed, etc.

- Variable Creation

    - At **runtime** each object is given an actual storage location that it can use to store values.
    - Process of reserving storage for an object's use is called **allocation**
    - *Key Insight:* An object is "created" once actual storage has been reserved for the object's use.

- Data Types

    - Data type determines what kind of value the object will store
    - In C++ the type of an object must be known at compile-time, and that type can not be changed without recompiling the program

- Defining Multiple Variables

    ```cpp
    int a;
    int b;
    ```
    ```cpp
    int a, b;
    ```

*Q1:* What is data?
    - Data is any information that can be moved, processed, or stored by a computer

*Q2:* What is a value?
    - A value is a letter, number, text, or instance of some other useful concept that can be represented as data

*Q3:* What is an object?
    - An object is a region of storage that can store a value

*Q4:* What is a variable?
    - A variable is an object that has a name

*Q5:* What is an identifier?
    - An identifier is the name that a varibale is accessed by

*Q6:* What is a data type used for?
    - A data type determines what kind of value the object will store

*Q7:* What is an integer
    - An integer is a number that can be written without a fractional component

















