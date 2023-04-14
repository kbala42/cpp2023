/*
Kullanicinin gircegi N sayindan cift ve tek sayilarin adedlerini
    ve toplamlarini, cift sayilarin ve tek sayilarin ortalamlarini bulan program

    1. kullanýcýdan sayý adedi iste

*/
#include<iostream>
using namespace std;

int main()
{
    int adet, sayi;
    int ciftAdet=0, ciftToplam =0, tekAdet=0, tekToplam =0, toplam = 0 ;

    cout<<"Kac adet sayi gireceksiniz:"; cin>> adet;

    for(int sayac=1; sayac<=adet; sayac++)
    {
        cout<<sayac<<". sayiyi giriniz:"; cin>>sayi;

        if(sayi%2 == 0)// cift mi tek mi?
        {
            ciftAdet++;
            ciftToplam = ciftToplam + sayi; // ciftToplam += sayi;
        }
        else // tekse
        {
            tekAdet++;
            tekToplam = tekToplam + sayi;
        }

    }
    toplam = ciftToplam + tekToplam;

    cout << "Sayilarin toplami;"<< toplam<<endl;

    cout << "Tek sayilarin adedi;"<< tekAdet<<endl;

    cout << "Cift sayilarin adedi;"<< ciftAdet<<endl;

    cout << "Tek sayilarin toplami;"<< tekToplam<<endl;

    cout << "Cift sayilarin toplami;"<< ciftToplam<<endl;

    cout << "Ortalamalar:"<<endl;

    cout << "Sayilarin ortalmasi;"<< toplam/ adet <<endl;

    cout << "Tek Sayilarin ortalamasi;"<< tekToplam/ tekAdet <<endl;

    cout << "Cift Sayilarin ortalamasi;"<< ciftToplam/ ciftAdet <<endl;

    cout << "Sayilarin ortalmasi;"<< double(toplam)/ adet <<endl; // toplam önce double tipe dönusturup ortalmasini aliyoruz

    cout << "Tek Sayilarin ortalamasi;"<<double(tekToplam)/ tekAdet <<endl; // tekToplam önce double tipe dönusturup ortalmasini aliyoruz

    cout << "Cift Sayilarin ortalamasi;"<< double(ciftToplam)/ ciftAdet <<endl;// ciftToplam önce double tipe dönusturup ortalmasini aliyoruz



    return 0;
}
