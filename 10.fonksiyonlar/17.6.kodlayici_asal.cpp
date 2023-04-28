/*
    Parametre olarak gönderilen sayının asal sayı olup olmadığını
    belirleyen fonksiyon yazınız. (asal ise 1 değilse 0 döndürsün.)

                                                        Kamil Bala

    Alıntı Deneyap Yazılım Teknolojileri Ortaokul
*/
#include<iostream>
using namespace std;

int asal_sayi_mi(int sayi)
{
    for(int i=2;i<sayi;i++)
        if( sayi% i == 0)return 0;

    return 1;
}
int main()
{
    int sonuc = asal_sayi_mi(23);
    cout << sonuc;

    return 0;
}
