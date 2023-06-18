#ifndef ISIM_H
#define ISIM_H

class Isim
{
	char ad[30]; 
	char soyad[30]; 
	public:
		Isim();
		Isim (char *, char * ); 
		~Isim();
		
		void setAd(const char *) ; 
		void setSoyad(const char * ); 
		char * getAd(); 
		char * getSoyad(); 
		void kaydet(char *, char * ); 
		void goster() ; 
		
};

#endif
