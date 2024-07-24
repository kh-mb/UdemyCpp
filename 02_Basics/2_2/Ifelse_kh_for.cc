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

    int i;
    int j;

    for (i = 0; i < 3; i++)

    {
        j = 3 - i;
        std::cout << "You have " << j << " attempts!\n";
        std:: uint32_t number;
        std:: cout << "Please enter a number: ";
        std:: cin >> number;

        if (number >= 0 && number <= 10) {

            if (number == 4) {

                std:: cout << "Correct guess!";

            }

        //   else if Einführung
        //   1. Beispiel: auch bei anderer Eingabe "Trostpreis" / 2. Beispiel: nur bei geraden Zahlen "Trostpreis" / 3. Beispiel: Modulus

        //     else if (number == 2) {
        //         std::cout << "Close enough!";
        //         }

        //   else if (number == 2 || number == 6 || number == 8 || number == 10) {
        //         std::cout << "Close enough!";
        //         }

        //    else if (number % 2 == 0) {
        //            std::cout << "Close enough!";
        //            }

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
