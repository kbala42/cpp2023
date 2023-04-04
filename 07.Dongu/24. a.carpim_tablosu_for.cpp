/*
    Carpim Tablosunu Ekrana Yazdirma

                                                        Kamil Bala

     Duru öğretmen öğrencilerine 1’den 9’lara kadar olan çarpım tablosunu öğretmek için
     bilgisayardan ekran çıktısı alıp yazdırmak istemektedir. Bunun için program yazmak isteyen
     Duru öğretmen bilgisayarda nasıl kodlamalıdır?

                                                        Deneyap Yazılım Teknolojileri Lise


*/
#include<iostream>

using namespace std;

int main()
{
    for(int i=1; i<10; i++)
        for(int j=1; j<=10; j++)
            cout << i << " x "<< j << " = " << i*j <<endl;

    return 0;
}
