#include<iostream>
using namespace std;

class Araba
{
    string marka;
    string model;
    string rengi;
    int kapiSayisi;
    int fiyati;
    int motorSeriNo;

    public:
        void setMarka()
        {
            string markaAdi;
            cout<<"Marka Adý: "; cin>>string markaAdi;
            marka = markaAdi;
        }

        void setModel(string modelAdi)
        {
            model = modelAdi;
        }

        void setRengi(string renkAdi)
        {
            rengi = renkAdi;
        }

        void setKapiSayisi(int kapiSayisiAl)
        {
            kapiSayisi = kapiSayisiAl;
        }

        void setFiyati(int fiyatiAl)
        {
            fiyati = fiyatiAl;
        }

        void setmotorSeriNo(int motorSeriNoAl)
        {
            motorSeriNo = motorSeriNoAl;
        }
        void ArabaOzellikleri() // ozelliklere toplu erisme
        {
            cout<<"marka: "<<marka<<endl;
            cout<<"model: "<<model<<endl;
            cout<<"rengi: "<<rengi<<endl;
            cout<<"Kapi Sayisi: "<<kapiSayisi<<endl;

        }

        void getMarka()
        {
            cout<<"marka: "<<marka<<endl;
        }

        void getModel()
        {
            cout<<"model: "<<model<<endl;
        }

        void getRengi()
        {
            cout<<"rengi: "<<rengi<<endl;
        }

        void getKapiSayisi()
        {
            cout<<"Kapi Sayisi: "<<kapiSayisi<<endl;
        }

        void getFiyati()
        {
            cout<<"Fiyati: "<<fiyati<<endl;
        }

        void getmotorSeriNo()
        {
            cout<<"Motor seri no: "<<motorSeriNo<<endl;
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
    togg.setMarka();
    togg.setModel();
    togg.setRengi();
    togg.setKapiSayisi();
    togg.ArabaOzellikleri();

    cout<<"\n\n";

    togg.getMarka();
    togg.getModel();
    togg.getRengi();
    togg.getKapiSayisi();


    return 0;
}
