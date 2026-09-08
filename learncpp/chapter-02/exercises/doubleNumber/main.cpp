
#include <iostream>

int doubleNumber(int x)
{
    return x * 2;
}

int main()
{
    int x {};
    std::cout << "Enter a number to double: ";
    std::cin >> x;

    std::cout << "Your number doubled: "<< doubleNumber(x) << '\n';

    return 0;
}


