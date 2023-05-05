/*
    göstericileri (pointer) nesnenin hafýza adresini
    tutmak için kullanýyoruz
    new operatörü ile pointer üretimi

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
            Constructor metodu
        ***************************/
        Personel(string ad,string soyad,string bolum, string dil, int yas,int id, int maas )
        {
            Ad = ad;
            Soyad = soyad;
            Bolum = bolum;
            Dil = dil;
            Yas = yas;
            Id = id;
            Maas = maas;
        }

       /*
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
        */
        /*************************
            Getter metotlarý
        ***************************/

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
            cout<<"Bolum: "<<Bolum<<endl;
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

         void bilgiAl()
        {
            cout<<"Ad: "<<Ad<<endl;
            cout<<"Soyad: "<<Soyad<<endl;
            cout<<"Yas: "<<Bolum<<endl;
            cout<<"Dil: "<<Dil<<endl;
            cout<<"Yas: "<<Yas<<endl;
            cout<<"Id: "<<Id<<endl;
            cout<<"Maas: "<<Maas<<endl;
        }

        void zamYap();
        void dilEkle();

};

int main()
{
    Personel *ptrCalisan= new Personel("Ahmet", "Can", "Bilgisayar", "ingilizce", 2000, 1234, 20000); // personel sınıfından ptrcalisan pointer nesnesi üretiyoruz

    ptrCalisan->bilgiAl();// pointer nesnesinden nesnenin metotlarýna eriþmek için -> iþaretini kullanýyoruz


    return 0;
}
