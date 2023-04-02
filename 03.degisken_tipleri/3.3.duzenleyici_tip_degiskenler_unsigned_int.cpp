 /*
    unsigned int veri tipi


                                            Kamil Bala
*/

#include <iostream>

using namespace std;

int main()
{
    cout<<"---unsigned int veri tipi---"<<endl;

    // int veri tipi (4 byte)
    cout << "unsigned int boyutu: " << sizeof(unsigned int) << endl;
    cout << endl;
    // min değer:0 max değer: 4,294,967,295

    unsigned int int_min = 0;
    unsigned int int_max = 4294967295;

    unsigned int int_neg1 = -1;
    unsigned int int_poz1 = 4294967296;

    unsigned int int_neg2 = -2;
    unsigned int int_poz2 = 4294967297;


    cout << "unsigned int_min: " << int_min << endl;
    cout << "unsigned int_max: " << int_max << endl;
    cout << endl;

    cout << "unsigned int_neg1: " << int_neg1 << endl;
    cout << "unsigned int_poz1: " << int_poz1 << endl;
    cout << endl;

    cout << "unsigned int_neg2: " << int_neg2 << endl;
    cout << "unsigned int_poz2: " << int_poz2 << endl;
    cout << endl;

    return 0;

}

