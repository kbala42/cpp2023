#include<iostream>
using namespace std;

class Bank
{
    protected:
        string MusteriAdi;
        string KrediTuru;
        double FaizOrani;
        int Vade;
        int GeriOdeme;
    public:
        virtual void bireyselKredi(double cekilecekTurar)=0;



};

class XBank:Bank
{
    public:
        XBank(string musteriAdi, string krediTuru, int vade)
        {
            MusteriAdi = musteriAdi;
            KrediTuru = krediTuru;
            Vade = vade;
        }
        void bireyselKredi(double cekilecekTutar)
        {
            GeriOdeme = cekilecekTutar * 1.3 + 500;
            cout<<"Geri odenecek tutar: " << GeriOdeme<<endl;
        }
};
class YBank:Bank
{
    public:
        YBank(string musteriAdi, string krediTuru, int vade)
        {
            MusteriAdi = musteriAdi;
            KrediTuru = krediTuru;
            Vade = vade;
        }
        void bireyselKredi(double cekilecekTutar)
        {
            GeriOdeme = cekilecekTutar * 1.3 + Vade * 1.1;
            cout<<"Geri odenecek tutar: " << GeriOdeme<<endl;
        }
};
int main()
{
    XBank xbank("Demir","Bireysel Kredi",24);
    xbank.bireyselKredi(50000);

    YBank ybank("Kartal","Bireysel Kredi",24);
    ybank.bireyselKredi(50000);

    return 0;
}
