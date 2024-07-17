#include <iostream>
#include <unistd.h>

int main()
{
    std::cout << "didn't enter the delay" << std::endl;
    usleep(1500000);
    std::cout << "finished the delay" << std::endl;
    std::cout << std::flush;
    //std::flush ensures that any pending output is immediately displayed on the output
    return 0;
}