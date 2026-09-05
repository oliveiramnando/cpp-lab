
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

## 1.2 - Comments

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

## 1.4 - Variable Assignment and Initialization

- Variable Assignment

    - The `=` operator is called the assignment operator

    ```cpp
    int width;  // define an integer variable named width
    width = 5;  // assignment of value 5 into variable width
    // Variable width now has value 5
    ```

    - Assignment copies the value on the right-hand side of the *= operator* to the variable on the left-hand side of the operator. This is called **copy-assignment**

- Variable Initialization 

   - The process of specifying an initial value for an object is called **initialization**, and the syntax used to initialize an object is called an initializer 

- Default-Initialization

    - When no initializer is provided this is called **default-initialization**
    
    ```cpp
    int a;  // default-initialization
    ```

- Copy-Initialization

    ```cpp
    int width = 5;  // copy-initialization of value 5 into variable width
    ```

    - Copies value on the rhs of equals into the variable on the lhs

    - Also used whenever values are implicitly copied, such as when passing arguments to a fucntion by value, returning from a function by value, or catching exceptions by value

- Direct-Initialization

    - When an initial value is provided inside parenthesis, this is called **direct-initialization**

    ```cpp
    int width ( 5 );    // direct initialization of value 5 into variable width
    ```

    - Also used when values are explicitly cast to another type

- List-Initialization

    ```cpp
    int width { 5 };    // direct-list-initialization (preferred)
    int height = { 6 }  // copy-list-initialization (rarely used)
    ```

    - Works in almost all cases, behaves consistently, and has unambiguous syntax

    - *Key Insight:* When we see curly braces, we know we're list-initializing an object

    - Provides a way to initialize objects with a list of values rather than a single value

- List-initialization disallows narrowing conversions

    - If you try to list-initialize a variable using value that the variable can not safely hold, the compiler is required to produce a diagnostic to notify you

    ``` cpp
    int w1 { 4.5 }; // compile error: list-init does not allow narrowing conversion
    
    int w2 = 4.5;   // compiles
    int w3 (4.5);   // compiles
    ```

    - applies only to initialization, not to any subsequent assignments

- Value-initialization and zero-initialization

    ```cpp
    int width {}; // value-initialization / zero-initialization to value 0
    ```

    - Will implicitly initialize the variable to zero (or whatever value is closest to zero for a given type)

- List-initialization is the preferred form of initialization in modern C++

- Initialize your variables

- Instantiation

- Initializing multiple variables

- Unused initialized variables warnings

- The `[[maybe_unused]]` attribute

    ```cpp
    #include <iostream>

    int main()
    {
        [[maybe_unused]] double pi { 3.14159 };  // Don't complain if pi is unused
        [[maybe_unused]] double gravity { 9.8 }; // Don't complain if gravity is unused
        [[maybe_unused]] double phi { 1.61803 }; // Don't complain if phi is unused
    
        std::cout << pi << '\n';
        std::cout << phi << '\n';
    
        // The compiler will no longer warn about gravity not being used
    
        return 0;
    }
    ```

    - Tell the compiler that we’re okay with a variable being unused

    - Should be applied selectively to variable that reason for being unsused

*Q1:* What is the difference between intitalization and assignment?

- Initialization gives a variable an initial value at the point when it is created.

- Assignment gives a variable a value at some point after the variable is created.

*Q2:* What form of initialization should you prefer when you want to initialize a variable with a specific value?

- Direct-list-initialization

*Q3:* What are default-initialization and value-initialization? What is the behavior of each? Which should you prefer?

- Default-initialization is when a variable initializzzation has no initializer. In most cases, the variable is left with an indeterminate value

- Value-initialization is when a variable initialization has an empty brace initializer. In most cases this will perform zero-initialization

- You should prefer value-initialization, as it initializes the variable to a consistent value

## 1.5 - Introduction to Iostream: cout, cin, endl

- *Best Practice:* Prefer `\n` over `strd::endl` when outputting text to the console

- `operator<<` vs `operator>>`

    - `std::cin` and `std::cout` always go on the lhs of the perator
    
    - `<<` is used with `std::cout`, and shows the direction that data is moving

    - `>>` is used with `std::cin`, and show the direction that data is moving

## 1.6 - Uninitialized Variables and Undefined Behavior

- Uninitialized Variables

    - When variable that is not initialized is given a memory address to use to store data, the default value of that variable is whatever garbage value happens to already be in that memory address

    - Initialized = The object is given a known value at the point of definition

    - Assignment = The object is given a known valye beyond the point of definition

    - Uninitialized = The object has not been given a known value yet.

- Undefined Behavior

    - **Undefined Behavior** is the result of executing code whose behavior is not well-defined by the C++ language

    - *Rule:* Take care to avoid all situations that result in undefined behavior, such as using unitialized variables

- Implementation-Defined Behavior and Unspecified Behavior

    - A specific compiler and the associated standard library it comes with are called an **implementation**

    - Behavior that is defined by the implementation is called **implementation-defined behavior**

    ```cpp
    #include <iostream>

    int main()
    {
        std::cout <<sizeof(int) << '\n';    // most platforms, will will produce 4, but on others it may produce 2
        return 0;
    }
    ```

    - *Best Practice:* Avoid imoplementation-defined and unspecified behavior whenever possible, as they may cause your program to malfunction on other implementation


*Q1:* What is an uninitialized variable? Why should you avoid using them?

- An unitialized variable is a variable that has not been given a value by the program (generally through initialization or assignment). Using the value stored in an unitialized variable will result in undefined behavior

*Q2:* What is undefined behavior, and what can happen if you do something that exhibits undefined behavior?

- Undefined behavior is the result of executing code whose behavior is not well defined by the language. The result can be almost anything, including something that behaves correctly.
