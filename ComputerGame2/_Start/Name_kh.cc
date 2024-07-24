#include <cstdint>
#include <iostream>
#include <string>

int main()
{

        std::string pre_name;
        std::string last_name;

        std::cout << "Player! What is your name?\n";
        std::cin >> pre_name >> last_name;

        std::cout << "ahh your name is " << last_name << ", " << pre_name << " "<< last_name << std::endl;


    return 0;

}
