#include<iostream>
using namespace std;

class Okul
{
    protected:
        string Ad;
        string Soyad;
        int Yas;

    public:
        Okul(string ad, string soyad, int yas):Ad(ad),Soyad(soyad),Yas(yas)
        {
          cout<<"Okul sinifi calisti"<<endl;
        }
        void genelBilgiAl()
        {
            cout<<"Ad: "<<Ad<<endl;
            cout<<"Soyad: "<<Soyad<<endl;
            cout<<"Yas: "<<Yas<<endl;
            //cout<<"Sube: "<<Sube<<endl;
        }
};
class Ogrenci:public Okul
{
    private:
        string Sube;
        string OkulNo;
        int Ortalama;

    public:
        Ogrenci(string ad, string soyad, int yas, string sube, string okulNo, int ortalama):Okul(ad, soyad, yas)
        {
            Sube = sube;
            OkulNo = okulNo;
            Ortalama = ortalama;
            cout<<"Ogrenci sinifi calisti"<<endl;
        }

        void ogrenciBilgiAl()
        {
            cout<<"Ad: "<<Ad<<endl;
            cout<<"Soyad: "<<Soyad<<endl;
            cout<<"Yas: "<<Yas<<endl;
            cout<<"Okul No: "<<OkulNo<<endl;
            cout<<"Ortalama: "<<Ortalama<<endl;

        }
};
/*
class Ogretmen:Okul
{
    public:
        Ogretmen()
        {
            cout<<"Ogretmen sinifi calisti"<<endl;
        }


};
class YardimciPersonel:Okul
{
    public:
        YardimciPersonel()
            {
                cout<<"Yardimci Personel sinifi calisti"<<endl;
            }

};
class Idareci:Ogretmen // her idareci bir ogretmendir
{
    public:
        Idareci()
        {
            cout<<"Idareci sinifi calisti"<<endl;
        }


};
class Mudur:Idareci // her mudur hem ogretmen hem de idarecidir
{
    public:
        Mudur()
        {
            cout<<"Mudur sinifi calisti"<<endl;
        }


};
*/
int main()
{
    Ogrenci ogrenci("Hasan","Can", 14, "7A", "789", 5);
    //ogrenci.genelBilgiAl();
    ogrenci.ogrenciBilgiAl();

    return 0;
}
