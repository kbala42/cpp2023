/*
    göstericileri (pointer) nesnenin hafýza adresini
    tutmak için kullanýyorux

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
    Personel per1("Hasan", "Can","Bilgisayar", "ingilizce", 2000, 1234, 20000 );

    Personel *ptrnesne; // Personel sýnýfýndan pointer nesnesi oluþturuyorum

    ptrnesne = &per1; // per1'in adresini saklamak için & iþaretini kullanýyorum

    ptrnesne->bilgiAl();// pointer nesnesinden nesnenin metotlarýna eriþmek için -> iþaretini kullanýyoruz


    return 0;
}
