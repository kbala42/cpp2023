#include <iostream>

using namespace std;

void menuyuGoster()
{
    cout<<  "***************\n"
            "*             *\n"
            "*     Menu    *\n"
            "*             *\n"
            "***************\n"<<endl;
    cout<<  "1.Yeni Kayit Ekle\n"
            "2.Tum listeyi Goster\n"
            "3.Ogrenci id'ye gore Kayit Sil\n"
            "4.Ogrenci Ara\n"
            "5.Cikis\n"<<endl;

}
void ogrenciEkle()
{
    cout<<"Ogrenci eklendi\n";
}
void listeyiGoster()
{
    cout<<"Liste gosterildi\n";
}
void ogrenciSil()
{
    cout<<"Ogrenci silindi\n";
}
void ogrenciAra()
{
    cout<<"Ogrenci bilgileri\n";
}

int main()
{
    int secim = 0;

    do
    {
        menuyuGoster();cin>>secim;

        if(secim == 1)       ogrenciEkle();

        else if (secim == 2) listeyiGoster();

        else if (secim == 3) ogrenciSil();

        else if (secim == 4) ogrenciAra();

        else if (secim == 5) break;


        else cout<<"Hatali secim yaptiniz tekrar deneyiniz...\n";


    }while(secim != 5);


    return 0;
}
