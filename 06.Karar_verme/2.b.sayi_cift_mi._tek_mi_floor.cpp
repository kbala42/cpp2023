/*
    Girilen bir sayýnýn çift mi? tek mi ? oldugunu bulan program
    floor fonksiyonu kullanarak.
    floor fonksiyonu yuvarlama yapar. Eğer yuvarlama yapılan normal değerle aynı ise
    çifttir.

                                                                Kamil Bala
*/
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int sayi, IkiKat;

    cout<< "Bir sayi giriniz: ";
    cin>>sayi;

    IkiKat = 2 * floor(sayi/2);

    if (sayi == IkiKat) cout<<"Girdiginiz sayi cifttir "<<endl;

    else cout<<"Girdiginiz sayi tektir "<<endl;



    return 0;
}
