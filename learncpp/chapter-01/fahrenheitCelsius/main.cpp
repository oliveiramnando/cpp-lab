
#include <iostream>

int main()
{
    float fahren{ };
    float celsius{ };

    std::cout << "Enter temperature in Fahrenheit: ";

    std::cin >> fahren;

    celsius = (fahren - 32) * (5.0f/9.0f);

    std::cout << "Temperature in Celsius: " << celsius;

    return 0;
}

