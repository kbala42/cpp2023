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

        void mesaj_gonder();// taným sýnýf dýþýnda yaptýk

};
void CepTelefonu::mesaj_gonder()
{
    cout<<Marka<<" ile mesaj gonderiliyor"<<endl;
}

int main()
{
    CepTelefonu t1("iphone", "13",30000);
    CepTelefonu t2("Samsung","S23",25000);

    t1.bilgiAl();
    t2.bilgiAl();

    t1.arama();
    t2.arama();

    t1.mesaj_gonder();
    t2.mesaj_gonder();

    return 0;
}
