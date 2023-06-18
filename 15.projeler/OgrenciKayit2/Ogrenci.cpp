#include "Ogrenci.h"
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std; 

Ogrenci::Ogrenci()
{
}

Ogrenci::~Ogrenci()
{
}

Ogrenci :: Ogrenci(  dogumTarihi dt , Ders dr, Isim i , int no , int ort   )
{
	dogumT= dt; 
	ders= dr; 
	isim= i; 
	numara= no; 
	ortalama= ort; 
	
 }
 
void Ogrenci :: setNumara(int n )
{
	numara = n; 
 } 
int Ogrenci ::  getNumara() 
{
	return numara; 	
}
void Ogrenci ::  setOrtalama (int ort )
{
	ortalama= ort; 
	
}
int  Ogrenci :: getOrtalama () 
{
	return ortalama; 
}

	
	 
void  Ogrenci :: Kaydet(dogumTarihi dt , Ders dr, Isim i , int no , int ort   )
{
	dogumT= dt; 
	ders= dr; 
	isim= i; 
	numara= no; 
	ortalama= ort; 
}
void Ogrenci ::  Goster(  )
{
	cout<<numara << " Numarali Ogrenci Bilgileri : "; 
	isim.goster(); 
	dogumT.goster() ; 
	ders.goster(); 
	cout<<"Not Ortalamasi  : "<< ortalama<< endl<< endl ; 
}

