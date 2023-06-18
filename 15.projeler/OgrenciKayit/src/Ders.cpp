#include "Ders.h"
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

Ders::Ders()
{
  	dersKodu = 0;
	strcpy(dersAdi, "");
}

Ders::Ders(int _dersKodu , char * _dersAdi )
{
	dersKodu = _dersKodu;
	strcpy(dersAdi, _dersAdi);
}

Ders::~Ders()
{
    //dtor
}

void Ders::setDersKodu(int _dersKodu)
{
    dersKodu = _dersKodu;
}
void Ders::setDersAdi(char *_dersAdi )
{
    strcpy(dersAdi, _dersAdi);
}
int Ders::getDersKodu()
{
    return dersKodu;

}
char * Ders:: getDersAdi()
{
    return dersAdi;
}
void Ders::kaydet(int _dersKodu, char *_dersAdi )
{
    dersKodu = _dersKodu;
	strcpy(dersAdi, _dersAdi);
}
void Ders::goster()
{
    cout<<"Ders Kod/Ad     : "<< dersKodu<< "  :  "<< dersAdi<< endl;
}
