/*
    Girilen metni tersten yazdirma

                                                                Kamil Bala


*/
#include<iostream>
using namespace std;


int main()
{
    string katar;
    char harf;
    int adet;

    cout<<"Metni giriniz: ";getline(cin,katar);

    cout<<"Tekrar sayisini bulacagimiz harfi girin: "; cin>>harf;

    int harfSayisi = katar.length();

    for(int i=0; i<=harfSayisi; i++)
    {
        if (harf == katar[i]) adet++;
    }

    cout<<harf<<" harfinden "<<adet<<" adet var"<<endl;

    return 0;
}
