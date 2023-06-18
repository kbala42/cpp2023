#include<iostream>
using namespace std;

class Araba
{
    public:
        string marka;
        string model;
        string rengi;
        int kapiSayisi;
        int fiyati;
        int motorSeriNo;

        void ArabaOzellikleri()
        {

        }

        void ileriGit()
        {
            cout<<"ileri gidiyoruz"<<endl;
        }
        void geriGit()
        {
            cout<<"geriye gidiyoruz"<<endl;
        }
        void durdur()
        {
            cout<<"durduruyoruz"<<endl;
        }

};
int main()
{
    Araba togg;
    togg.marka= "TOGG";
    togg.model = "SUV";
    togg.rengi = "Kirmizi";
    togg.kapiSayisi = 4;
    togg.geriGit();
    togg.geriGit();
    togg.ileriGit();

    cout<<"marka: "<<togg.marka<<endl;
    cout<<"model: "<<togg.model<<endl;
    cout<<"rengi: "<<togg.rengi<<endl;
    cout<<"Kapi Sayisi: "<<togg.kapiSayisi<<endl;


    return 0;
}
