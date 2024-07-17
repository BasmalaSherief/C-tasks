#include <iostream>

int main()
{
    int i;
    char a;

    std::cout << "The ASCI table :" << std::endl;
    std::cout << " _______________" << std::endl;
    std::cout << "| ASCI  | Char  |" << std::endl;
    std::cout << "|_______|_______|" << std::endl;

    for(i=0;i<=255;i++)
    {
        a = i;
        std::cout << "| " << i << "    | " << a << "     |" << std::endl;
    }
    std::cout << "|_______________|" << std::endl;
    return 0;
}