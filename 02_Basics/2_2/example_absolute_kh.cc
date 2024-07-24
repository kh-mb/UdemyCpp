#include <iostream>
#include <cstdint>
#include <iomanip>

// 1.) User-Input: number
// 2.) Compute the absolute value of the number
// 3.) Print out the absolute value

// x < 0: -x
// x >= 0: x

int main()
{
    double number = 0.0F;
    std::cout << "Please enter a number: ";
    std::cin >> number;
    double absolut_number = -1.0F * number;

    if (number < 0.0F) {

            std::cout << "Absolut_Wert ("<< number <<"): " << absolut_number;
    }

    else {

        std::cout  << "Absolut_Wert ("<< number <<"): " << number << std::endl;
    }

    return 0;
}
