/*
    Parametre olarak gönderilen harfi, yine parametre olarak gönderilen
    sayı kadar ekrana yazdıran bir fonksiyon tanımlamak isteseydiniz nasıl kodlardınız?
    Örnek kullanım: tekrar_yaz(‘z’,5)
                        Kamil Bala

    Alıntı Deneyap Yazılım Teknolojileri Ortaokul
*/
#include<iostream>
using namespace std;

void tekrar_yaz(char a, int adet)
{
    for(int i=0;i<adet;i++)
    cout << a;
}

int main()
{
    tekrar_yaz('z',5);
    return 0;
}
