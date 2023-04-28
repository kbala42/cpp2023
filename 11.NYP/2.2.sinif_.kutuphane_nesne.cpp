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
        void mevcut(char *, char *, int );
        void goster();
};
void Card :: mevcut(char *ka, char *yz, int adt)
{
    strcpy(kitapAdi, ka);
    strcpy(yazarAdi,yz);
    adet = adt;
}
void Card::goster()
{
    cout<<"\nKitap Adý: "<<kitapAdi<<"\nYazarý: "<<yazarAdi<<"\nAdeti: "<<adet<<endl;
}
int main()
{
    setlocale(LC_ALL,"Turkish");
    Card kitap1, kitap2, kitap3;
    kitap1.mevcut("Ay'a Seyehat", "Jules Verne", 8);
    kitap2.mevcut("Monte Cristo Kontu","Alexandre Dumas", 3);
    kitap1.mevcut("Beyaz Diþ", "Jack London", 10);

    kitap1.goster();
    kitap2.goster();
    kitap2.goster();

    return 0;
}
