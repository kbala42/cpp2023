/*
    Merve adlý öðrenci 1’den 20’ye kadar olan tek sayýlarý bulan bir program yazýp
    ekranda göstermek istemektedir.   Merve bunun için sizce  nasýl bir kod yazmalý?

    Alýntý:
    Deneyap Ortaokul Yazýlým Teknolojileri
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
                                            // çikisa sayacin o anki degerini yaz
        sayac++;
    }

    return 0;
}
