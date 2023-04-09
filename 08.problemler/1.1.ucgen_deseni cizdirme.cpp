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

/*
    cout<< "Soldan ucgen cizme";

    string data = "* ";
    for (int i=1; i<=10; i++) cout << data * i << endl;
*/
    cout<< "Soldan ucgen cizme";

    string data = " *";
    string bosluk = " ";
    for (int i=1; i<=10; i++) cout <<bosluk * (10-i)  << data * i << endl;
}
