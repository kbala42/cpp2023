/*
    İki dizinin elemanlarindan en büyük elemanları bulup
    toplamlarını hesaplayan program

                        Kamil Bala

    Alıntı Deneyap Yazılım Teknolojileri Ortaokul
*/
#include<iostream>
using namespace std;

int en_buyuk(int dizi[5])
{int enbuyuk = dizi[0];
    for(int i=1;i<5;i++)
    {
        if(enbuyuk<dizi[i]) enbuyuk=dizi[i];
    }
    return enbuyuk;
}
int main()
{
    int dizi1[] = {5,3,4,5,8};
    int dizi2[] = {9,3,4,5,8};
    int en_buyuk_1 = en_buyuk(dizi1);
    int en_buyuk_2 = en_buyuk(dizi2);
    cout << "1. dizinin en buyugu:" << en_buyuk_1 << endl;
    cout << "2. dizinin en buyugu:" << en_buyuk_2 << endl;
    cout << en_buyuk_1 << "+" << en_buyuk_2 << "=" << en_buyuk_1 + en_buyuk_2;
}
