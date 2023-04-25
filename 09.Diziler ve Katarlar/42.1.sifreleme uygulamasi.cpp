/*
    Şifreleme uygulamasi

                                                                Kamil Bala

*/
#include<iostream>
using namespace std;


int main()
{
    int sayi, sayiDizisi[4];

    cout<<"4 basamakli bir sayi girin: ";cin>>sayi;

    sayiDizisi[0] = sayi%10;
    sayiDizisi[1] = (sayi/10)%10;
    sayiDizisi[2] = (sayi/100)%10;
    sayiDizisi[3] = sayi/1000;

    for(int i=0;i<4;i++) cout<<sayiDizisi[i]<<"\t";

    cout<<endl;


    return 0;
}
