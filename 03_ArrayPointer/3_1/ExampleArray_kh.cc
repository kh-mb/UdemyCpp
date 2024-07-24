#include <cstdint>
#include <iostream>

// Store in an array *array2* the reversed elements of *array1*.



int main()
{
   constexpr auto array_length = 4;

   std::int32_t array1[array_length] = {1, 4, 2860, 12};
   std::int32_t array2[array_length]{};


   std::cout << "Array 1: " ;

   for (unsigned int i = 0; i < array_length; ++i)

        {
           std::cout << array1 [i] << " ";
        }

    std::cout << std::endl;

    std::cout << "Array 2: " ;
    for (unsigned int i = 0; i < array_length; ++i)

        {
            unsigned int j = (array_length -1 - i);
            array2[i] = array1[j];

            std::cout << array2 [i] << " ";
         }





    return 0;
}
