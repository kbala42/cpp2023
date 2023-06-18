#include<iostream>
using namespace std;

class CepTelefonu
{
    private:
        string Marka;
        string Model;
        int Fiyat;

    public:
        CepTelefonu(string marka,string model, int fiyat)
        {
            Marka = marka;
            Model = model;
            Fiyat = fiyat;
        }
        void bilgiAl()
        {
            cout<<"Telefon Markasi: "<<Marka<<endl;
            cout<<"Telefon Model: "<<Model<<endl;
            cout<<"Telefon Fiyati: "<<Fiyat<<endl;
        }
        void arama()// taným sýnýf içinde yaptýk
        {
            cout<<Marka<<" ile arama yapiliyor"<<endl;
        }

        void mesaj_gonder(string gonderMesaj);// taným sýnýf dýþýnda yaptýk

};
void CepTelefonu::mesaj_gonder(string gonderMesaj)
{
    cout<<Marka<<" gonderdigi mesaj: "<<gonderMesaj<<endl;
}

int main()
{
    CepTelefonu *ptr[2];// pointer nesnesi
    string marka,model; int fiyat;

    cout<<"1. telefonun adini giriniz: "; cin>>marka;
    cout<<"1. telefonun modelini giriniz: "; cin>>model;
    cout<<"1. telefonun fiyatini giriniz: "; cin>>fiyat;
    ptr[0]= new CepTelefonu (marka, model,fiyat);

    cout<<"2. telefonun adini giriniz: "; cin>>marka;
    cout<<"2. telefonun modelini giriniz: "; cin>>model;
    cout<<"2. telefonun fiyatini giriniz: "; cin>>fiyat;
    ptr[1]= new CepTelefonu (marka, model,fiyat);


    ptr[0]->bilgiAl();
    ptr[1]->bilgiAl();

    ptr[0]->arama();
    ptr[1]->arama();

    ptr[0]->mesaj_gonder("Merhaba");
    ptr[1]->mesaj_gonder("iyi aksamlar");

    return 0;
}
