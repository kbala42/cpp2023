/*
    Rastgele Girilen N adet Say�n�n Toplam�ni yazdiran program

    while ile

                                                                Kamil Bala
*/
#include<iostream>
using namespace std;

int main()
{
    int toplam=0, adet, sayi, sayac = 1;

    cout<< "Kac adet sayi toplayacaksiniz:";
    cin>> adet;

    while(sayac <= adet)
    {
        cout<<sayac<<". sayi giriniz: ";
        cin>>sayi;

        toplam += sayi;

        sayac++;
    }
    cout<<toplam<<endl;

    return 0;
}
