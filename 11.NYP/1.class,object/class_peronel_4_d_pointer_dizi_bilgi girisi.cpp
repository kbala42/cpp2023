/*
    gösterici dizisi ile bilgi giriþi ve bilgileri göstermek

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
    Personel *ptr[3];// pointer sýnýfýndan bir dizi oluþturuyoruz.

    string ad, soyad, bolum, dil;
    int yas, id, maas;

    for(int i=0; i<3; i++)
    {
        cout<<endl;
        cout<<i+1<<". personele ait bilgileri giriniz...\n"<<endl;
        cout<<"Ad: "; cin>>ad;
        cout<<"Soyad: "; cin>>soyad;
        cout<<"Bolum: "; cin>>bolum;
        cout<<"Dil: "; cin>>dil;
        cout<<"Yas: "; cin>>yas;
        cout<<"Id: "; cin>>id;
        cout<<"Maas: "; cin>> maas;;
        ptr[i] = new Personel(ad, soyad, bolum, dil, yas, id, maas);
    }

    cout<<endl<<endl;


    for(int i=0; i<3; i++) // dizi elemanlarini okumak için döngü
    {
        cout<<i+1<<". personele ait bilgiler...\n"<<endl;
        ptr[i]->bilgiAl();
        cout<<"\n\n";
    }

    return 0;
}
