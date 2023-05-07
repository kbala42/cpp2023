/*


*/


#include<iostream>
#include<cstring>

using namespace std;

class Ceptelefonu
{
public:
    char marka[30];
    int fiyat;
    bool aramaDurumu;
    void arama();
};

void Ceptelefonu::arama()
{
    aramaDurumu = true;
    cout<<"istediginiz arama gerceklestiriliyor"<<endl;
}
int main()
{
    Ceptelefonu urun;
    strcpy(urun.marka,"Samsung");
    urun.fiyat=6500;
    cout<<"Urun: "<<urun.marka<<" urun fiyati: "<<urun.fiyat<<endl;
    urun.arama();


    return 0;
}
