/*
    Ekrana yazı yazdırma

    Görev 1. Ekrana 10 kez deneyap ardından 2 kez “Merhaba!”
    yazan ekrana_yaz isimli bir fonksiyon yazalım.


                        Kamil Bala


*/
#include<iostream>
using namespace std;

void ekranaYaz()
{
    for(int i=0; i< 10; i++) cout<<"Deneyap"<<endl;
    for(int i=0; i< 2; i++) cout<<"Merhaba!"<<endl;
}
int main()
{
    ekranaYaz();

    return 0;
}
