// 1.) User-Input: side length of a square
// 2.) Compute the perimeter and area of a square.
// 3.) Print out the values to the console.

#include <iostream>

int main()
{
    float value_x;
    float value_y;

    std:: cout << "Side length x: ";
    std:: cin >> value_x;

    std:: cout << "Side length y: ";
    std:: cin >> value_y;

    float perimeter;
    float area;

    perimeter = 2.0*value_x + 2.0*value_y;

    std:: cout << "Square Perimeter: "<< perimeter << std::endl;

    area = value_x * value_y;
    std:: cout << "Sqaure Area: " << area << std::endl;

    return 0;
}
