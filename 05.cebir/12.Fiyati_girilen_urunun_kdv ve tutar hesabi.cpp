/*
    Fiyati girilen urunun kdv ve tutar hesabi

                                                                Kamil Bala
*/

#include<iostream>

using namespace std;

int main()
{

    float fiyat, kdvOran,kdv, tutar;

    cout<< "Urunun kdv'siz fiyatini giriniz: "; cin>>fiyat;

    cout<< "Urunun kdv'sini giriniz: "; cin>>kdvOran;

    kdv = fiyat * kdvOran / 100;

    tutar = fiyat + kdv;

    cout<< "Urunun kdv'siz fiyati: "<<fiyat<<endl;

    cout<< "Urunun kdv'si: "<<kdv<<endl;

    cout<< "Urunun kdv dahil tutari: "<<tutar<<endl;

    return 0;
}

