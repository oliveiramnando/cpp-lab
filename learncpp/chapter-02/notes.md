
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












