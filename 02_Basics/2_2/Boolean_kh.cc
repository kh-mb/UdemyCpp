#include <cstdint>
#include <iostream>

// true: 1
// false: 0

// !true => false
// !false => true

int main()
{
    std::int32_t number = 4;

    bool check = ((number >= 0) && (number <= 10));
    std::cout << "Check: " << std::boolalpha << check << std::endl;


    return 0;
}
