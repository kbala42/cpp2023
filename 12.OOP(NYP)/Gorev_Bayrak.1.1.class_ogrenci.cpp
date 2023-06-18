/*
    Öğrenci sınıfını tanımlama ve iki öğrenci nesnesi oluşturma
*/
#include<iostream>
#include<cstring>
using namespace std;

class Ogrenci {

    int ogr_no;
    char ogr_ad[20];
    char ogr_soyad[20];

    public:
        void deger_ata(int no, char ad[], char soyad[])
        {
            ogr_no = no;
            strcpy(ogr_ad, ad);
            strcpy(ogr_soyad, soyad);
        }
        void goster(){
            cout<<"Ogrenci Bilgi: " << ogr_no <<" "<< ogr_ad << " " << ogr_soyad <<
            endl;
        }
};

int main()
{
    Ogrenci ogr1;
    Ogrenci ogr2;

    ogr1.deger_ata(372, "Arda", "Ozcan");
    ogr2.deger_ata(624, "Duru", "Ozen");

    ogr1.goster();
    ogr2.goster();

    return 0;
}
