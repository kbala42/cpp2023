#include "Ogrenci.h"
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

Ogrenci::Ogrenci()
{
    //ctor
}

Ogrenci::~Ogrenci()
{
    //dtor
}
Ogrenci :: Ogrenci(DogumTarihi _dogumTarihi , Ders _ders, Isim _isim , int _no , int _ort)
{
	dogumTarihi= _dogumTarihi;
	ders= _ders;
	isim= _isim;
	numara= _no;
	ortalama= _ort;

 }
void Ogrenci ::setNumara(int _no )
{
    numara = _no;
}
void Ogrenci ::setOrtalama (int _ort)
{
    ortalama= _ort;
}
void Ogrenci ::Kaydet(DogumTarihi _dogumTarihi , Ders _ders, Isim _isim , int _no , int _ort)
{
   	dogumTarihi = _dogumTarihi;
	ders = _ders;
	isim = _isim;
	numara = _no;
	ortalama = _ort;
}

int Ogrenci ::getNumara()
{
    return numara;
}
int Ogrenci ::getOrtalama ()
{
    return ortalama;
}

void Ogrenci ::Goster()
{
    cout<<numara << " Numarali Ogrenci Bilgileri : ";
	isim.goster();
	dogumTarihi.goster() ;
	ders.goster();
	cout<<"Not Ortalamasi  : "<< ortalama<< endl<< endl ;

}
