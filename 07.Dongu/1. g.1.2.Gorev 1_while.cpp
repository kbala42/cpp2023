/*
    Merve adl� ��renci 1�den 20�ye kadar olan tek say�lar� bulan bir program yaz�p
    ekranda g�stermek istemektedir. � Merve bunun i�in sizce� nas�l bir kod yazmal�?

    Al�nt�:
    Deneyap Ortaokul Yaz�l�m Teknolojileri
    while cozumu

                                                        Kamil Bala
*/
#include<iostream>
using namespace std;

int main()
{
    int sayac=1;
    while(sayac<20)
    {
        if (sayac%2 == 1) cout<<sayac<<endl; // ikiyebolundugunde kalan 1 ise yani tekse
                                            // �ikisa sayacin o anki degerini yaz
        sayac++;
    }

    return 0;
}
