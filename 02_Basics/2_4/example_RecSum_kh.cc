#include <iostream>
#include <cstdint>


int RecSum (int number)
{
    if (number > 0)
    {
        return number + RecSum (number - 1);

    }

    else if (number == 0)
    {
        return 0;
    }

}


int main ()

{
    unsigned int number = 2;
    unsigned int Sum = RecSum (number);

    std::cout << "Rekursive Summer von " << number << " = " << Sum << '\n';

    return 0;
}
