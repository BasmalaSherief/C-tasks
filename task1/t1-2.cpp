#include <iostream>

int main()
{
    int x,y,z;
    std::cout << "Enter the first number: " << std::endl;
    std::cin >> x ;
    std::cout << "Enter the second number: " << std::endl;
    std::cin >> y ;
    std::cout << "Enter the third number: " << std::endl;
    std::cin >> z ;

    if(x>y && x>z)
    {
        std::cout << "The first number is the maximum ";
    }
    else
    {
        if(y>x && y>z)
        {
            std::cout << "The second number is the maximum ";
        }
        else
        {
            std::cout << "The third number is the maximum ";
        }
    }
}