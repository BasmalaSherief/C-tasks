#include <iostream>
#include <cmath>

int main()
{
    double a,b,c;

    std::cout << "enter the height a : " << std::endl;
    std::cin >> a;
    std::cout << "enter the base b : " << std::endl;
    std::cin >> b;

    std::cout << "the hypotenuse 'c' = " << std::hypot(a,b) << std::endl;

    std::cout << "Area = " << (a*b/2) << std::endl;

    return 0;
}