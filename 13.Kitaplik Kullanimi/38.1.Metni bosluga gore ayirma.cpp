/*
    Girilen metni bo�lu�a g�re ay�rma

                                                                Kamil Bala


*/
#include<iostream>
using namespace std;


int main()
{
    string katar;

    cout<<"Metni giriniz: ";getline(cin,katar);

    int harfSayisi = katar.length();

    for(int i=0; i<=harfSayisi; i++)
    {
        cout<<katar[i];

        if (katar[i] == ' ') cout<<endl;
    }

    return 0;
}
