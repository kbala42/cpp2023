#include<iostream>
using namespace std;

class Hayvan
{
    protected:
        string Tur;
        string Yas;
    public:
        Hayvan(string tur, int yas)
        {
           Tur = tur;
           Yas = yas;
        }
        virtual void neYer()=0; // sinifi soyut hale getiriyoruz. Yine sifira esitleyerek
        // butun alt siniflarda kullanimini zorunlu hale getiriyoruz
};

class Kopek: Hayvan
{
    public:
        Kopek(string tur, int yas):Hayvan(tur, yas)
        {

        }
        void neYer()
        {
            cout<<"et yer"<<endl;
        }
};

class Koyun:Hayvan
{
    public:
        Koyun(string tur, int yas):Hayvan(tur, yas)
        {

        }
        void neYer()
        {
            cout<<"ot yer"<<endl;
        }
};

int main()
{
    //Hayvan hayvan; soyut bir siniftan nesne tanimlanamaz
    Kopek kopek("kopek", 7);
    kopek.neYer();
    Koyun koyun("koyun", 1);
    koyun.neYer();

    return 0;
}
