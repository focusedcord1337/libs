#ifndef MY_SEE_BITS_H
#define MY_SEE_BITS_H

#include <iostream>

template <typename T, typename = std::enable_if_t<std::is_arithmetic_v<T>>>
void print_bits(T val)
{
    std::cout << "0b ";

    for (size_t i = sizeof(val) * __CHAR_BIT__, j = 0; i > 0; i--, j++)
    {
        T status{(T)(val & (1 << (i - 1)))};

        if (status)
        {
            std::cout << "1";
        }
        else
        {
            std::cout << "0";
        }
        if (j != 0 && ((j + 1) % 4) == 0)
        {
            std::cout << " ";
        }
    }

    std::cout << "\n";
}

#endif
