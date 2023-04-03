/*
    Rastgele girilen N sayindan negatif ve
    pozitif adetlerini ve toplamlarini bulan program

    while
                                                                Kamil Bala

*/

#include<iostream>
using namespace std;

int main()

{
    int adet, sayi, sayac=1;

    int negatifAdet = 0, negatifToplam = 0;

    int pozitifAdet = 0, pozitifToplam = 0;

    cout<<"Kac sayi toplayacaksiniz:";
    cin>>adet;

    while(sayac<=adet)
    {

        cout<<sayac<<". sayiyi girin:"; cin>>sayi;

        if (sayi<0)
        {
            negatifAdet++;

            negatifToplam += sayi;

        }
        else
        {

            pozitifAdet++;

            pozitifToplam += sayi;

        }
        sayac++;
    }

    cout<<"\n*** Sonuc ***\n";

    cout<<"\nPozitif sayilarin adedi:"<<pozitifAdet<<endl;

    cout<<"\nPozitif sayilarin toplami:"<<pozitifToplam<<endl;

    cout<<"\nNegatif sayilarin adedi:"<<negatifAdet<<endl;

    cout<<"\nNegatif sayilarin toplami:"<<negatifToplam<<endl;

    return 0;

}
