
// Rastgele girilen N sayindan cift ve tek sayilarin adedlerini
//    ve toplamlarini bulan program
#include<iostream>

using namespace std;

int main()
{
    int adet=0; // Kullanýcýnýn girmek istedigi sayi adedi
    int sayi=0; // Kullanicinin girdigi sayi
    int tekAdet=0, ciftAdet=0;
    int tekToplam =0, ciftToplam=0;

    cout<< "Kac adet sayi gireceksiniz:"; cin>>adet;

    for(int sayac=1; sayac<=adet; sayac++)
    {
        cout<<sayac<<". sayiyi giriniz:"; cin>>sayi;

        if(sayi % 2 == 0)
        {
            cout<<"sayi cift"<<endl;
            ciftAdet++; // ciftAdet = ciftAdet + 1
            ciftToplam = sayi + ciftToplam;
        }
        else
        {
            cout<<"sayi tek"<<endl;
            tekAdet++; // tekAdet = tekAdet + 1;
            tekToplam = sayi + tekToplam;
        }
    }
    cout<<ciftAdet<<" cift sayi girildi"<<endl;
    cout<<tekAdet<<" tek sayi girildi"<<endl;

    cout<<ciftToplam<<" cift sayilarin toplami"<<endl;
    cout<<tekToplam<<" tek sayilarin toplami"<<endl;
    return 0;
}
