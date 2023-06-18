#include<iostream>
#include<cstring>
#include<clocale>

using namespace std;

class Card
{
    private:
        char kitapAdi[30];
        char yazarAdi[30];
        int adet;
    public:
        void kaydet(char *, char *, int );
        void goster();
};
void Card :: kaydet(char *_kitapAdi, char *_yazarAdi, int _adet)
{
    strcpy(kitapAdi, _kitapAdi);
    strcpy(yazarAdi,_yazarAdi);
    adet = _adet;
}
void Card::goster()
{
    cout<<"\nKitap Adi: "<<kitapAdi<<"\nYazari: "<<yazarAdi<<"\nAdeti: "<<adet<<endl;
}
int main()
{
    setlocale(LC_ALL,"Turkish");

    Card kitap1, kitap2, kitap3;

    kitap1.kaydet("Ay'a Seyehat", "Jules Verne", 8);
    kitap2.kaydet("Monte Cristo Kontu","Alexandre Dumas", 3);
    kitap1.kaydet("Beyaz Diþ", "Jack London", 10);

    kitap1.goster();
    kitap2.goster();
    kitap2.goster();

    return 0;
}
