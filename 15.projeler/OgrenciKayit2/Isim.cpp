#include "Isim.h"
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std; 

Isim::Isim()
{ 
}

Isim::Isim( char *a, char *s )
{ 
	strcpy(ad, a); 
	strcpy(soyad, s); 
	
}

Isim::~Isim()
{
}


void Isim :: setAd( const  char * a ) 
{
	strcpy(ad, a); 	
 } 
void Isim:: setSoyad(const char * s )
{
	strcpy( soyad, s); 	
}
char  * Isim::  getAd()
{
	return ad; 
}
char *  Isim:: getSoyad()
{
	return soyad; 
}
void Isim ::  kaydet(char * a, char * s )
{
	strcpy(ad, a); 
	strcpy(soyad, s); 
	
}
void Isim ::  goster() 
{ 	
	cout<<"\nAd/Soyad        : "<< ad<< " " << soyad ; 
}

