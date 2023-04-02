 /*

    unsigned short int veri tipi

                                            Kamil Bala

*/

#include <iostream>

using namespace std;

int main()
{
    cout<<"---unsigned short int veri tipi---"<<endl;

    // int veri tipi (2 byte)
    cout << "unsigned short int boyutu: " << sizeof(unsigned short int) << endl;

    // min değer:0 max değer: 65535

    unsigned short int int_min = 0;
    unsigned short int int_max = 65535;

    unsigned short int int_neg1 = -1;
    unsigned short int int_poz1 = 65536;

    unsigned short int int_neg2 = -2;
    unsigned short int int_poz2 = 65537;


    cout << "unsigned short int_min: " << int_min << endl;
    cout << "unsigned short int_max: " << int_max << endl;
    cout << endl;

    cout << "unsigned short int_neg1: " << int_neg1 << endl;
    cout << "unsigned short int_poz1: " << int_poz1 << endl;
    cout << endl;

    cout << "unsigned short int_neg2: " << int_neg2 << endl;
    cout << "unsigned short int_poz2: " << int_poz2 << endl;
    cout << endl;

    return 0;

}

