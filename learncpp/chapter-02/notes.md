
# Chapter - 02

## 2.1 - Introduction to Functions

- A **function** is a reusable sequence of statements designed to do a particular job

- A **function call** tells the CPU to interrupt the current function and execute another function

- An Example of a User-Defined Function

    ```cpp
    returnType functionName() // This is the function header (tells the compiler about the existence of the function)
    {
        // This is the function body (tells the compiler what the function does)
    }
    ```

    - First line is informally called the **function header**

- Calling functions more than once

- Functions can call functions that call other functions

- Nested Functions are not Supported

## 2.2 - Function return values (value-returning functions)

```cpp
#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an integer: "
    int input{};
    std::cin >> input;
    return input;
}

int main()
{
    int num { getValueFromUser() };
    std::cout << num << " doubled is: " << num * 2 << '\n';
    return 0;
}
```

- Return Values

    - When the return statement is executed:
        
        - The return expressions is evaluated to produce a value

        - The value produced by the return expression is copied back to the caller. This copy is called the **return value** of the function

        - The function exits, and control returns to the caller

    - The process of returning a copied calue back to the caller is named **return by value**

- Revisiting main()
    
    - When the program is executed, the os makes a function call to `main()`. Execution then jumps to the top of `main()`. The statements in `main()` are executed sequentially. Finally, `main()` returns an int value, and program terminates.

    - In C++, there're two special requirements for `main()`:
        
        - `main()` is required to return an `int`

        - Explicit functioncalls to `main()` are disallowed

- Status Codes

    - Status code of `0` mean program ran normally; otherwise the number is used to indicate some kind of failure

- A value-returning function that does not return a value will produce undefined behavior

- Function main will implicitly return 0 if no return statement is provided

- Functions can only return a single value

- Function author can decide what the return value means

- Reusing functions

    - DRY = "Don't Repeat Yourself"

## 2.3 - Void Functions (non-value returning functions)

- Void return values

- Void Functions don't need a return statement

    - *Best Practice:* Don't put a return statement at the end of a non-value returning function

- Void functions can't be used in expression that require a value

- Returning a value from a void function is a compile error

## 2.4 - Introduction to Function Parameters and Arguments

- Function Paramters and Arguments

    - **Function Parameter** is a variable used in the header of a function

        - They are initialized with a value provided by the caller of the function

    - An **argument** is a value that is passed *from* the caller *to* the function when a function call is made

- How parameters and arguments work together

    - When a function is called, all of the parameters of the function are created as variables, and the value of each of the arguments is *copied* into the matching parameter (using copy initialization).

    - This process is called **pass by value**.

    - Function parameters that utilize pass by value are calle d **value parameters**
    
    ```cpp
    #include <iostream>

    // The values of x and y are passed in by the caller
    void printValues(int x, int y)
    {
        std::cout << x << '\n'
        std::cout << y << '\n'
    }

    int main()
    {
        printValues(6, 7);  // This function call has two arguments, 6 and 7
        return 0;
    }
    ```

- Using return values as arguments

    ```cpp
    #include <iostream>

    int getValueFromUser()
    {
     	std::cout << "Enter an integer: ";
    	int input{};
    	std::cin >> input;
    
    	return input;
    }
    
    void printDouble(int value)
    {
    	std::cout << value << " doubled is: " << value * 2 << '\n';
    }
    
    int main()
    {
    	printDouble(getValueFromUser());
    
    	return 0;
    }
    ```

- How paramters and return values work together

    ```cpp
    #include <iostream>
    
    // add() takes two integers as parameters, and returns the result of their sum
    // The values of x and y are determined by the function that calls add()
    int add(int x, int y)
    {
        return x + y;
    }
    
    // main takes no parameters
    int main()
    {
        std::cout << add(4, 5) << '\n'; // Arguments 4 and 5 are passed to function add()
        return 0;
    }
    ```

- Unreferenced parameters and unnamed parameters

    - **Unreferenced Parameters** are paramters that are not used in the body of the function

    - A paramters without a name is called an **unnamed paramter**

    - *Best Practice:* Whena function paramter exists but is not used in the body of the function, do not give it a name. You can optionally put a name inside a comment

## 2.5 - Introduction to Local Scope

- Local Variables

    - Variables defined inside the body of a function are called **local variables**

- Local Variable Lifetime

    - Local variaables are destroyed in the opposite order of creation at the end of the set of curly braces in which it is defined (or for a function parameter, at the end of the function)

    ```cpp
    int add(int x, int y)
    {
        int z{ x + y };
    
        return z;
    } // z, y, and x destroyed here
    ```

    - An objects's **lifetime** is defined to be the time between its creation and destruction

    - Variable creation and destruction happen when the program is running, not at compile time. Therefore, lifetime is a runtime property

- What happens when an object is destroyed?

    - At some point after destruction, the memory used by the object will be deallocated

- Local Scope (block scope)

    - An identifier's **scope** determines where the identifier can be seen and used within the source code

    - When an identifier can bve seen and used, we say it is **in scope**. When it can not be seen, we can not use it, and we say it is **out of scope**

    - Scope is compile-time property

    ```cpp
    #include <iostream>

    // x is not in scope anywhere in this function
    void doSomething()
    {
        std::cout << "Hello!\n";
    }
    
    int main()
    {
        // x can not be used here because it's not in scope yet
    
        int x{ 0 }; // x enters scope here and can now be used within this function
    
        doSomething();
    
        return 0;
    } // x goes out of scope here and can no longer be used
    ```

- "Out of Scope" vs "Going Out of Scope"

- Functional separation

    - *Key Insight:* Names used for function parameters or variables declared in a functional body are only visible within the function that declares them. This means local variables within a function can be named without regard for the names of variables in other functions. This helps keep functions independent.

- Where to define local variables

    - Best practice is that local variables inside the function body should be defined as close to their first use as reasonable

- When to use function parameters vs local variables

- Introduction to temporary objects
    
    - *Key Insight:* Return by value returns a temporary object (that holds a copy of the return value) to the caller.

## 2.6 - Why Functions are Useful, and How to Use Them Effectively

- Why use functions

## 2.7 - Forward Declarations

-  The compiler compiles the contents of code files sequentially.

- *Best Practice:* When addressing compilation errors or warnings in your programs, resolve the first issue listed and then compile again

- Option 1: Reorder the function definitions

    - define a function before main

- Option 2: Use a forward declaration

    - A **forward declaration** allows us to tell the compiler about the existence of an identifier *before* actually defining the identifier

    - Use a **function declaration** statement

    ```cpp
    int add(int x, int y); // function declaration includes return type, name, parameters, and semicolon.  No function body!
    ```

    ```cpp
    #include <iostream>

    int add(int x, int y); // forward declaration of add() (using a function declaration)
    
    int main()
    {
        std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; // this works because we forward declared add() above
        return 0;
    }
    
    int add(int x, int y) // even though the body of add() isn't defined until here
    {
        return x + y;
    }
    ```

    ```cpp
    int add(int, int); // valid function declaration
    ```

    - *Best Practice:* Keep the parameter names in your function declarations

- Why forward declarations?

- Forgetting the function body

    - If a forward declaration is made and the function is called, but the program never defines the function, the program will compile okay, but the linker will complain that it can't resolve the function call

- Other types of forward declarations

- Declarations vs. Definitions

    - A **declaration** tells the *compiler* about the *existence* of an identifier and its associated type information.

    ```cpp
    int add(int x, int y); // tells the compiler about a function named "add" that takes two int parameters and returns an int.  No body!
    int x;                 // tells the compiler about an integer variable named x
    ```

    - A **definition** is a declaration that actually implements (for functions and types) or instantiates (for variables) the identifier

    ```cpp
    // because this function has a body, it is an implementation of function add()
    int add(int x, int y)
    {
        int z{ x + y };   // instantiates variable z
    
        return z;
    }
    
    int x;                // instantiates variable x
    ```

    - Declarations that aren't definitions are called **pure declarations**

    - When the compiuler encounters an identifier, it will check to ensure use of that identifier is valid
    
- The One Definition Rule (ODR)

    1. Within a *file*, each function, variable, type, or template in a given scope can only have one definition. Definitions occurring in different scopes (e.g. local variables defined inside different functions, or functions defined inside different namespaces) do not violate this rule.

    2. Within a *program*, each function or variable in a given scope can only have one definition. This rule exists because programs can have more than one file. Functions and variables not visible to the linker are excluded from this rule 

    3. Types, templates, inline functions, and inline variables are allowed to have duplicate definitions in different files, so long as each definition is identical. 

    - Violating part 1 of the ODR will cause the compiler to issue a redefinition error.

    - Violating part 2 will cause the linker to issue a redefinition error

    - Violating part 3 will cause undefined behavior

## 2.8 - Programs With Multiple Code Files














