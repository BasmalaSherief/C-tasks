#include <iostream> 

#include <bitset> 


using namespace std; 

 

int main() { 

    int decimal; 

    cout << "Enter a decimal number: "; 

    cin >> decimal; 

 
    bitset<8> binary(decimal); 

    cout << "The binary equivalent = " << decimal << " is " << binary << endl; 


    int bin;

    cout << "Enter binary number:";

    cin >> bin;

    bitset<4> bits(bin); 
    unsigned long decimalconv = bits.to_ulong();

    cout << "The decimal equivalent = " << decimalconv << endl; 

    return 0; 

}