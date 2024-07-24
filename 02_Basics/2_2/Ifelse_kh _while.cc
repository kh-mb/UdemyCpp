#include <cstdint>
#include <iostream>

// true: 1
// false: 0

// !true => false
// !false => true

// Greater Equal: >=
// Greater: >
// Equal: ==
// Less: <
// Less Equal: <=

//AND: &&
//OR: ||


int main()
{
    std::cout << "Welcome to my Guessing Game!\n";

    bool has_won = false;

    while (!has_won)

    {
        std:: uint32_t number;
        std:: cout << "Please enter a number: ";
        std:: cin >> number;

        if (number >= 0 && number <= 10) {

            if (number == 4) {

                std:: cout << "Correct guess!";
                has_won = true;

            }

                     else {

                        std:: cout << "WROOOONG!\n";

                    }

        }


        else {

            std:: cout << "You number is not in range 0 - 10" << std::endl;

        }

    }

    return 0;
}
