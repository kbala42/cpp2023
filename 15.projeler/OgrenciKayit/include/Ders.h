#ifndef DERS_H
#define DERS_H


class Ders
{
   	int dersKodu;
	char dersAdi[20];
	public:
		Ders();
		Ders(int, char *);
		~Ders();

		void setDersKodu(int );
		void setDersAdi(char * );
		int getDersKodu();
		char * getDersAdi();
		void kaydet(int, char * );
		void goster();
};


#endif // DERS_H
