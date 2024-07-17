#include <iostream>
#include <vector>

int main()
{
    char letter;
    bool isLowercasevowel , isUppercasevowel;
    std::cout << "enter a letter : " << std::endl;
    std::cin >> letter;

    isLowercasevowel = (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u');
    isUppercasevowel = (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U');


    if(isLowercasevowel || isUppercasevowel)
    {
        std::cout << "it's vowel " << std::endl;
    }
    else
    {
        std::cout  << "it's not vowel";
    }

    return 0;
}