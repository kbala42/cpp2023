/*
    Araba sýnýfýna bir fonksiyon ekleme ve nesne tanýmlama
*/
#include <iostream>

using namespace std;

class Araba {
    private:
        string Marka;
        string Model;
        int Yil;
        int Fiyat;
    public:
        //Parametreli sinif ici yapýcý fonksiyon
        Araba(string marka, string model, int yil, int fiyat)
        {
            Marka = marka;
            Model = model;
            Yil = yil;
            Fiyat = fiyat;
        }
        void bilgiAl()
        {
            cout << Marka << " " << Model << " " << Yil << " " <<Fiyat << "\n";
        }
};
int main() {
    // Yapýcý fonksiyonu farkli degerlerle cagirarak Araba nesneleri olusturma
    Araba araba1("Suzuki", "Vitara", 2016, 225000);
    Araba araba2("Volkswagen", "T-Roc", 2020, 360000);

    // Degerleri yazdirma
    araba1.bilgiAl();
    araba2.bilgiAl();

    return 0;
}
