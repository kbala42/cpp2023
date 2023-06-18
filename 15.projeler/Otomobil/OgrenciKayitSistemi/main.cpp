#include <iostream>
#include"Ogrenci.h"
#include<list>

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

void ogrenciEkle(list<Ogrenci>* lst )
{
    int id;
    string ad, soyad, isim;
    int sinavNot;
    cout<<"Ogrenci id giriniz: ";cin>>id;
    cout<<"Ogrenci adini ve soyadini giriniz: ";cin>>ad>>soyad;
    isim = ad + " " + soyad;
    cout<<"Ogrenci notunu giriniz: ";cin>>sinavNot;
    Ogrenci ogr(id, isim, sinavNot);
    lst->push_back(ogr);


}
void listeyiGoster(list<Ogrenci>* lst)
{
    list<Ogrenci>::iterator it;
    cout<<"\n--------Tum Ogrenci listesi---------\n";

    for(it = lst->begin(); it != lst->end(); it++)
    {
       it->bilgileriYaz();
    }
    cout<<endl;
}

void ogrenciSil(list<Ogrenci>* lst)
{
    list<Ogrenci>::iterator it;

    int id;
    cout<<"Sileceginiz pgrencinin id girin: ";cin>>id;

    for(it = lst->begin(); it != lst->end(); it++)
    {
       if(it->getId() == id)
        break;
    }
    if (it == lst->end())
        cout<<"Aranan id bulunamadi...";
    else lst->erase(it);

}

void ogrenciAra(list<Ogrenci>* lst)
{
list<Ogrenci>::iterator it;

    int id;
    cout<<"Bilgisini istediginiz pgrencinin id girin: ";cin>>id;

    for(it = lst->begin(); it != lst->end(); it++)
    {
       if(it->getId() == id)
        break;
    }
    if (it == lst->end())
        cout<<"Aranan id bulunamadi...";
    else
    {
        cout<<"Aradiginiz id bilgileri:\n";
        it->bilgileriYaz();
        cout<<endl;
    }

}

int main()
{
    list<Ogrenci>* ogrenciList = new list<Ogrenci>();

    int secim =0;

    do
    {
        menuyuGoster();cin>>secim;

        if(secim == 1)       ogrenciEkle(ogrenciList);

        else if (secim == 2) listeyiGoster(ogrenciList);

        else if (secim == 3) ogrenciSil(ogrenciList);

        else if (secim == 4) ogrenciAra(ogrenciList);

        else if (secim == 5) break;


        else cout<<"Hatali secim yaptiniz tekrar deneyiniz...\n";


    }while(secim != 5);


    return 0;
}
