#include <cstdint>
#include <iostream>

// Compute the sum for every column

int main()
{
    constexpr static auto num_rows = std::uint32_t{3};
    constexpr static auto num_cols = std::uint32_t{2};

    std::int32_t my_matrix[num_rows][num_cols] = {{1, 2}, {3, 4}, {5, 6}};
    std::int32_t sum_column1 = 0;
    std::int32_t sum_column2 = 0;

    //Summe Spalte 1

    std::cout << "Werte Spalte 1: " << std::endl;

    for (std::uint32_t i = 0; i < num_rows; ++i)
    {

        std::cout << my_matrix [i][0] << " ";

    }

    for (std::uint32_t i = 0; i < num_rows; ++i)
    {

        sum_column1 += my_matrix [i][0];

        std::cout << my_matrix [i][0]<< " ";

    }

    std::cout << "Summe Spalte 1: " << sum_column1 << std::endl;

    //Summe Spalte 2

    std::cout << "Werte Spalte 2: " << std::endl;

    for (std::uint32_t j = 0; j < num_rows; ++j)
    {

        std::cout << my_matrix [j][1] << " ";

    }

    for (std::uint32_t j = 0; j < num_rows; ++j)
    {

        sum_column2 += my_matrix [j][1];

        std::cout << my_matrix [j][1]<< " ";

    }

    std::cout << "Summe Spalte 2: " << sum_column2 << std::endl;

    return 0;
}
