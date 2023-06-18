#ifndef OGRENCI_H
#define OGRENCI_H

#include "dogumTarihi.h"
#include "Ders.h"
#include "Isim.h"

class Ogrenci
{

    private:
        DogumTarihi dogumTarihi;
        Ders ders;
        Isim isim;
        int numara;
        int ortalama;

	public:
		Ogrenci();
		Ogrenci( DogumTarihi _dogumTarihi, Ders _ders, Isim _isim , int _no , int _ort );
		~Ogrenci();

		void setNumara(int );
		void setOrtalama (int );
		void Kaydet(DogumTarihi, Ders, Isim, int, int);

        int getNumara() ;
        int getOrtalama () ;

		void Goster();



};

#endif // OGRENCI_H
