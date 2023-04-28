/*
    Tam bolunebilme

    Fonksiyona gönderilen sayı 5 ile tam bölünüyor ise ekrana “tam bölünür.”
    aksi durumda kalanı yazdıran fonksiyonu yazalım.




                        Kamil Bala

    Alıntı Deneyap Yazılım Teknolojileri Ortaokul
*/
#include<iostream>
using namespace std;

void besTamBol(int sayi)
{
     if(sayi%5==0)
     {
         cout<<sayi<<" sayisi 5 ile tam bolunur"<<endl;
     }
     else
     {
         cout<<sayi<<" sayisi 5 tam bolunemez"<<endl;
     }
}
int main()
{
    besTamBol(11);

    besTamBol(15);

    besTamBol(12);

    return 0;
}
