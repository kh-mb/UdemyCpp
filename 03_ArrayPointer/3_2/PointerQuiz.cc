#include <iostream>

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;

    int *p_d = &a;
    int *p_e = &b;
    int *p_f = &c;

    *p_d = (2 * (*p_e)) + (3 * (*p_f));
    p_d = &b;
    p_f = &a;

    *p_e = *p_d + *p_f;

    std::cout << a << '\n'; // 1
    std::cout << *p_d << '\n'; // 13
    std::cout << *p_e << '\n'; // 16
    std::cout << *p_f << '\n'; // 3

    return 0;
}
