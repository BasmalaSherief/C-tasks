#include <iostream>
#include <string>

int main()
{
    int num,sum =0;
    std::cout << "enter a number : " << std::endl;
    std::cin >> num;
    while(num!=0)
    {
        sum += num%10;
        num /= 10;
    }
    std::cout << "summation of digits is " << sum << std::endl;
    return 0;
}