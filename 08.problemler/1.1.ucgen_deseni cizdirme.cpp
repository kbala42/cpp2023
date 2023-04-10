/*
    Ekrana Ucgen Deseni Cizdirme

                                                                Kamil Bala
*/
#include<iostream>
#include <string>
using namespace std;

string operator*(string s, size_t count)
{
    string ret;
    for(size_t i = 0; i < count; ++i)
    {
        ret = ret + s;
    }
    return ret;
}


int main()
{


    cout<< "Soldan ucgen cizme"<< endl;

    string data = "* ";
    for (int i=1; i<=10; i++) cout << data * i << endl;

/*
    cout<< "Sagdan ucgen cizme"<< endl;

    string data = " *";
    string bosluk = " ";
    for (int i=1; i<=10; i++) cout <<bosluk * (10-i)  << data * i << endl;
 */
 /*
    cout<< "Soldan asagi ucgen cizme"<< endl;

    string data = "* ";
    for (int i=1; i<=10; i++) cout << data * (10-i) << endl;
*/
/*
    cout<< "Sagdan asagi ucgen cizme"<< endl;

    string data = "*";
    string bosluk = " ";
    //(i*' '),'*'*(10-i)
    for (int i=1; i<=10; i++) cout << bosluk * i << data * (10-i) << endl;
*/
    return 0;
}
