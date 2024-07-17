#include <iostream>

int main()
{
    int i,j;
    std::cout << "multiplication table :" << std::endl;

    for(i = 1; i<=12; ++i)
    {
        std::cout << "Table of " << i << std::endl;
        
        for(j=0 ; j<=12 ; ++j)
        {
            std::cout << i << "*" << j << " = " << i * j << std::endl;

        }
    }

    return 0;
}