/*
    g�stericileri (pointer) nesnenin haf�za adresini
    tutmak i�in kullan�yoruz
    new operat�r� ile pointer �retimi

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
    Personel *ptr[3];// pointer s�n�f�ndan bir dizi olu�turuyoruz.
                     //B�ylece ayr� ayr� nesne isimlieri �retmek zorunda kalmayaca��z

    ptr[0] = new Personel("Hasan", "Can","Bilgisayar", "ingilizce", 30, 1234, 20000 ); // dizi nesnleri �retiyoruz
    ptr[1] = new Personel("Tarkan", "Demir","Hizmetli", "ingilizce", 50, 1234, 12000 );
    ptr[2] = new Personel("Aslan", "Uzun","insan kaynaklari", "Almanca", 40, 1234, 30000 );

    ptr[0]->bilgiAl();// pointer nesnesinden nesnenin metotlar�na eri�mek i�in -> i�aretini kullan�yoruz
    cout<<"\n\n";
    ptr[1]->bilgiAl();
    cout<<"\n\n";
    ptr[2]->bilgiAl();
  /*
    for(int i=0; i<3; i++) // dizi elemanlarini okumak i�in d�ng�
    {
        ptr[i]->bilgiAl();
        cout<<"\n\n";
    }
  */

    return 0;
}
