/*
    setter ve getter metotlarý

*/
#include<iostream>
using namespace std;

class Personel
{
    private:
        string Ad; // _ad
        string Soyad; // _soyad
        string Bolum; // _bolum
        string Dil; // _dil
        int Yas;
        int Id;
        int Maas;

    public:
        /*************************
            Setter metotlarý
        ***************************/

        void setAd(string ad)
        {
            Ad = ad;
        }
        void setSoyad(string soyad)
        {
            Soyad = soyad;
        }
        void setBolum(string bolum)
        {
            Bolum = bolum;
        }
        void setDil(string dil)
        {
            Dil = dil;
        }

        void setYas(int yas)
        {
            Yas = yas;
        }
        void setId(int id) // Personel bilgi numarası
        {
            Id = id;
        }
        void setMaas(int maas)
        {
            Maas = maas;
        }


        void bilgiAl()
        {
            cout<<Ad<<endl;
            cout<<Soyad<<endl;
            cout<<Bolum<<endl;
            cout<<Dil<<endl;
        }

        void getAd()
        {
            cout<<"Ad: "<<Ad<<endl;
        }

        void getSoyad()
        {
            cout<<"Ad: "<<Soyad<<endl;
        }
        void getBolum()
        {
            cout<<"Yas: "<<Bolum<<endl;
        }
        void getDil()
        {
            cout<<"Dil: "<<Dil<<endl;
        }

        void getYas()
        {
            cout<<"Yas: "<<Yas<<endl;
        }
        void getId()
        {
            cout<<"Id: "<<Id<<endl;
        }
        void getMaas()
        {
            cout<<"Maas: "<<Maas<<endl;
        }

        void zamYap();
        void dilEkle();

};

int main()
{
    Personel per1;

    per1.setAd("Hasan");
    per1.setSoyad("Can");
    per1.setBolum("Bilgisayar");
    per1.setDil("ingilizce");


    per1.bilgiAl();

    cout<<"\n\n";

    per1.getAd();
    per1.getSoyad();


    return 0;
}
