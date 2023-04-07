 /*
    char Veri Tipi

                                           Kamil Bala

*/

#include <iostream>

using namespace std;

int main()
{
    char karakter = 'T';
    cout << "karakter: " << karakter<<endl;

    karakter += 32;
    cout << "karakter: " << karakter<<endl;

    karakter = 'T'+ ' ';
    cout << "karakter: " << karakter<<endl;

    karakter = 84 + ' ';
    cout << "karakter: " << karakter<<endl;

    karakter = 116 - ' ';
    cout << "karakter: " << karakter<<endl;

    karakter = 't' - ' ';
    cout << "karakter: " << karakter<<endl;

    karakter = 't' - 32;
    cout << "karakter: " << karakter<<endl;

    return 0;

}

