#include <iostream>

// 1.) Variable darf nicht imt einer Zahl starten
// 2.) Variable darf keine Leerzeichen enthalten
// 3.) Variable muss einzigaritig sein

int main()
{
    float my_float_value1;
    float my_float_value2;
    float my_result;

    std:: cout << "Number one: " << std::endl;
    std:: cin >> my_float_value1;

    std:: cout << "Number two: " << std::endl;
    std:: cin >> my_float_value2;

    my_result = my_float_value1 + my_float_value2;

    std:: cout << "Addition: " << my_result << std::endl;

    return 0;
}
