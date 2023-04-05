 /*
    Bit Atama Operatorleri

                                            Kamil Bala

*/

#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 3;


    // Bit olarak VE işlemi yap , ata (a &= b)
    // a = a & b
    // 0101
    // 0011
    // 0001
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    a &= b;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;


/*
    // Bit olarak VEYA işlemi yap , ata (a |= b)
    // a = a | b
    // 0101
    // 0011
    // 0111
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    a |= b;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
*/

/*
    // Bit olarak ÖZEL VEYA işlemi yap , ata (a ^= b)
    // a = a ^ b
    // 0101
    // 0011
    // 0110
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    a ^= b;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
*/

/*
    // Sola döndür ve ata. (a <<= b)
    // a = a << b
    // 0000 0101
    // 0000 1010 (1)
    // 0001 0100
    // 0010 1000

    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    a <<= b;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;

*/
/*
    // Saga döndür ve ata. (a >>= b)
    // a = a << b
    // 0000 0101
    // 0000 0010 (1)
    // 0000 0001 (2)
    // 0000 0000 (3)

    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    a >>= b;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
*/
    return 0;

}

