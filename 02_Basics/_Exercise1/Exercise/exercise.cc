#include <iostream>

#include "exercise.h"

void mod_cross_sum(int I, int J)
{
    std::uint16_t i = 0;
    std::uint16_t j = 0;


    for (std::uint16_t i = 0; i <= I; i++)
    {
        for (std::uint16_t j = 0; j <= J; j++)
        {
            std::uint16_t addition = i + j;

            if (addition % 2 == 0)
                {
                    std::cout << "i= " << i << "; " << "j= " << j << "; " << "Gerade!" << '\n';
                }

            else
            {
                    std::cout << "i= " << i << "; " << "j= " << j << "; " << "Ungerade!" << '\n';
            }

        }

    }

}
