#include<iostream>
using namespace std;

class Personel
{
    public:
        string ad;
        string soyad;
        string bolum;
        string dil;
        int yas;
        int id;
        int maas;

        void bilgiAl()
        {
            cout<<ad<<endl;
            cout<<bolum<<endl;
            cout<<dil<<endl;
        }

        void zamYap();
        void dilEkle();

};

int main()
{
    Personel per1;

    per1.ad="Hasan";
    per1.bolum="Bilgisayar";
    per1.dil="ingilizce";

    per1.bilgiAl();


    return 0;
}
