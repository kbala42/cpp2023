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
    int a, b;
    cout<<"agacin yukseligi: ";cin>>a;
    b=a;

    string data = "*";
    string bosluk = " ";

    for (int i=1; i<a+1; i++)
    {
        cout <<bosluk * b  << data * (2*i-1) << endl;
        b-=1;
    }



    return 0;
}
