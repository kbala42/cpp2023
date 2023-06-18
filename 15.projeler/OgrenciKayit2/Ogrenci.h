#ifndef OGRENCI_H
#define OGRENCI_H

#include "dogumTarihi.h"
#include "Ders.h"
#include "Isim.h" 

class Ogrenci
{
	 dogumTarihi dogumT; 
	Ders ders;
	Isim isim; 
	
	int numara ; 
	int ortalama; 
	
	public:
		Ogrenci();
		Ogrenci( dogumTarihi dt , Ders d, Isim i  , int s1, int s2  ); 
		void Kaydet(dogumTarihi, Ders, Isim, int, int); 
		void Goster(); 
		~Ogrenci();
	void setNumara(int ); 
	int getNumara() ;
	void setOrtalama (int ); 
	int getOrtalama () ;
	
	
	 
	
		
};

#endif
