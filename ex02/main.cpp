#include <iostream>
#include <cstdlib>
#include "Array.hpp"
#include <time.h>

#define MAX_VAL 100
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    Array<int> number2s;
    srand(time(NULL));
    try 
    {
         for (int i = 0; i < MAX_VAL; i++)
        {
            const int value = rand();
                numbers[i] = value;
         }
         for (int i = 0;i < MAX_VAL;i++)
         {
            std::cout << reset <<  numbers[i] << yellow << std::endl;
         }
    }
    catch(const std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << numbers[751] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << numbers[-1] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        for (int i = 0; i < 10; i++)
        {
            const int value = rand();
            number2s[i] = value;
        }
    
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}
