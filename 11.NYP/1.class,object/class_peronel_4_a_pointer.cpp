/*
    g�stericileri (pointer) nesnenin haf�za adresini
    tutmak i�in kullan�yorux

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

    Personel *ptrnesne; // Personel s�n�f�ndan pointer nesnesi olu�turuyorum

    ptrnesne = &per1; // per1'in adresini saklamak i�in & i�aretini kullan�yorum

    ptrnesne->bilgiAl();// pointer nesnesinden nesnenin metotlar�na eri�mek i�in -> i�aretini kullan�yoruz


    return 0;
}
