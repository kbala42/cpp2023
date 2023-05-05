/*

    Struct (Yapý) ile Dosya'ya Kayýt

    personel yapisý oluþturma

*/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <clocale>
#include <fstream>

using namespace std;

struct personel
{
    char ad[30];
    char soyad[30];
    int yas;
};


int main() {

    //setlocale(LC_ALL,"Turkish");



    ifstream ifile("personel.txt");
    if (!ifile)
    {
        cout<<"Okunacak dosyaya ulasilamadi "<<endl;
        exit(1);
    }
    struct personel per2[3];

    cout<<"\nVeritabanindan okuma islemi yapiliyor..\n";
    ifile.read((char*) per2, sizeof(per2));

    for(int i=0; i<3; i++)
    {
        cout<<per2[i].ad<<" "<<per2[i].soyad<<" "<<per2[i].yas<<endl;
    }


	return 0;

}
