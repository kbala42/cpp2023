 /*
    unsigned long int Veri Tipi

                                            Kamil Bala

*/

#include <iostream>

using namespace std;

int main()
{

    cout<<"---unsigned long int veri tipi---"<<endl;

    // int veri tipi (4 byte)
    cout << "unsigned long int boyutu: " << sizeof(unsigned long int) << endl;
    cout << endl;

    // min değer:0 max değer: 18446744073709551615

    unsigned long int unsigned_long_int_a = -1;
    unsigned long int unsigned_long_int_b =  4294967296L;

    cout << "long int long_int_a: " << unsigned_long_int_a << endl;
    cout << "long int long_int_b: " << unsigned_long_int_b << endl;

    return 0;

}

