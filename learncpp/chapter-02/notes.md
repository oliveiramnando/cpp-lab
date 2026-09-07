
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





