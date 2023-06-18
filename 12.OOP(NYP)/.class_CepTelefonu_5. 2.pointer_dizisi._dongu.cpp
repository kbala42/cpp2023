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

    for(int i=0; i<2; i++)
    {
        cout<<i+1<<". telefonun adini giriniz: "; cin>>marka;
        cout<<i+1<<". telefonun modelini giriniz: "; cin>>model;
        cout<<i+1<<". telefonun fiyatini giriniz: "; cin>>fiyat;
        ptr[i]= new CepTelefonu (marka, model,fiyat);
    }

    for(int i=0; i<2; i++)
    {
        ptr[i]->bilgiAl();
    }

    for(int i=0; i<2; i++)
    {
        ptr[i]->arama();
    }

    ptr[0]->mesaj_gonder("Merhaba");
    ptr[1]->mesaj_gonder("iyi aksamlar");

    return 0;
}
