#include <cstdint>
#include <iostream>
#include <string>


int main()
{

   std::string name;

   std::cout << "Player! Tell me your name!\n";
   std::cin >> name;
   std::cout << "This is your position.\n";
   std::cout << "|P........|\n";
   std::cout << "The goal is to reach the right side!\n" << "Let´s go\n";

   char LEFT = 'a';
   char RIGHT = 'd';
   char input;

   std::uint16_t next_position = 0;
   std::string position_1 = "|P........|";
   std::string position_2 = "|.P.......|";
   std::string position_3 = "|..P......|";
   std::string position_4 = "|...P.....|";
   std::string position_5 = "|....P....|";
   std::string position_6 = "|.....P...|";
   std::string position_7 = "|......P..|";
   std::string position_8 = "|.......P.|";
   std::string position_9 = "|........p|";


   while (true) {

        std::cout << name << "! What is your move?\n";
        std::cin >> input;


        if (LEFT == input) {

            std::cout << "You moved to the left!\n";
            next_position -= 1;

        }

        else if (RIGHT == input) {

            std::cout << "You moved to the right!\n";
            next_position += 1;
        }

        else
            std::cout << "Player! Wrong move!\n";

        if (next_position == 0) {
            std::cout << "|P.......|\n";
        }

        else if (next_position == 1) {
            std::cout << "|.P......|\n";
        }

        else if (next_position == 2) {
            std::cout << "|..P......|\n";
        }

        else if (next_position == 3) {
            std::cout << "|...P.....|\n";
        }

        else if (next_position == 4) {
            std::cout << "|....P....|\n";
        }

        else if (next_position == 5) {
            std::cout << "|.....P...|\n";
        }

        else if (next_position == 6) {
            std::cout << "|......P..|\n";
        }

        else if (next_position == 7) {
            std::cout << "|.......P.|\n";
        }

        else if (next_position == 8) {
            std::cout << "|........p|\n";
            std::cout << "You reached the GOAAAAAL";
            break;
        }

        else {
            std::cout << "You are not allowed to go back!\n";
            std::cout << "|P.......|\n";
            next_position = 0;
        }

    }

    return 0;

}
