/*

Dort islemi ayri ayri fonksiyonlar halinde yapan hesap makinesi

*/
#include<iostream>
using namespace std;

int carpma(int a, int b)
{
     return a*b ;
}
int toplama(int a, int b)
{
     return a+b;
}
int cikarma(int a, int b)
{
    return a-b;
}
int bolme(int a, int b)
{
    return a/b;
}

int main()
{
    // Kullanicidan iki sayi iste
    // dort islem yaptir

    int sayi1, sayi2;

    cout<<"Birinci sayiyi giriniz: "; cin>>sayi1;
    cout<<"Ikinci sayiyi giriniz: "; cin>>sayi2;

    cout<<sayi1<< " x "<< sayi2 <<" = "<<carpma(sayi1,sayi2)<<endl;
    cout<<sayi1<< " + "<< sayi2 <<" = "<<toplama(sayi1,sayi2)<<endl;
    cout<<sayi1<< " - "<< sayi2 <<" = "<<cikarma(sayi1,sayi2)<<endl;
    cout<<sayi1<< " / "<< sayi2 <<" = "<<bolme(sayi1,sayi2)<<endl;

    return 0;
}
