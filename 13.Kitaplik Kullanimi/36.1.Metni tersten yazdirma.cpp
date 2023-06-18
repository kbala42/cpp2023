/*
    Girilen metni tersten yazdirma

                                                                Kamil Bala


*/
#include<iostream>
using namespace std;


int main()
{
    string katar;
    cout<<"Metni giriniz: ";getline(cin,katar);

    int harfSayisi = katar.length();

    for(int i=harfSayisi; i>=0; i--) cout<<katar[i];


    return 0;
}
