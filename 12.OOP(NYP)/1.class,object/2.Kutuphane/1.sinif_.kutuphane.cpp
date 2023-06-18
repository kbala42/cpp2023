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

    return 0;
}
