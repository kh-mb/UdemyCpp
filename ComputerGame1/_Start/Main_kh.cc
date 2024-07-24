#include <cstdint>
#include <iostream>
// Implementiere den folgenden Code:
// Der User kann per Terminal eingeben ob man sich nach links ('a') oder nacht rechts ('d') bewegen will.
// So würde der Terminal Output dazu aussehen:

int main()
{

   // short Name;

   // std::cout << "Player! Tell me your name!\n";
   // std::cin >> Name;

   char LEFT = 'a';
   char RIGHT = 'd';

    char input;

   while (true) {

        std::cout << "Player! What is your move?\n";
        std::cin >> input;

        if (LEFT == input) {

            std::cout << "You moved to the left!\n";
        }

        else if (RIGHT == input)
        {

            std::cout << "You moved to the right!\n";
        }
        else

            std::cout << "Player! Wrong move!\n";
    }

    return 0;

}
