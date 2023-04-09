/*
    Merve adlý öðrenci 1’den 20’ye kadar olan tek sayýlarý bulan bir program yazýp
    ekranda göstermek istemektedir.   Merve bunun için sizce  nasýl bir kod yazmalý?

    Alýntý:
    Deneyap Ortaokul Yazýlým Teknolojileri
    for cozumu

                                                        Kamil Bala
*/
#include<iostream>
using namespace std;

int main()
{
    for(int sayac=1; sayac<20;sayac++)
    {
        if (sayac%2 == 1) cout<<sayac<<endl; // ikiyebolundugunde kalan 1 ise yani tekse
                                             // çikisa sayacin o anki degerini yaz
    }

    return 0;
}
