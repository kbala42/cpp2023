/*
     Oda sınıfına ait tasarladığınız bir suit odanın ölçü bilgilerini
    kullanıcıya sorup, suit odanın alan ve hacmini hesaplayan programı yazınız.
*/
#include<iostream>

using namespace std;

class Oda {
    private:
        double uzunluk;
        double genislik;
        double yukseklik;
    public:
        void veriAl(double uzn, double gns, double yks)
        {
            uzunluk = uzn;
            genislik = gns;
            yukseklik = yks;
        }
        double alanHesapla()
        {
            return uzunluk * genislik;
        }
        double hacimHesapla()
        {
            return uzunluk * genislik * yukseklik;
        }
};
int main()
{
    Oda suitOda;
    suitOda.veriAl(3.5, 4.3, 3.2);
    cout << "Suit Oda Alan: " << suitOda.alanHesapla() << endl;
    cout << "Suit Oda Hacim: " << suitOda.hacimHesapla() << endl;

    return 0;
}
