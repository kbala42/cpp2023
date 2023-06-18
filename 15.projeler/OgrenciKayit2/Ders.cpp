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
Ders::Ders(int dk , char * da )
{
	dersKodu = dk; 
	strcpy(dersAdi, da ); 	
}


Ders::~Ders()
{
}


void Ders:: setDersKodu(int dk )
{
	dersKodu= dk; 
}
void Ders :: setDersAdi(char * da )
{
	strcpy( dersAdi, da); 	
}
int Ders:: getDersKodu()
{
	return dersKodu; 
}
char *  Ders:: getDersAdi(  )
{
	return dersAdi; 
}
void Ders::  kaydet(int dk, char * da ) 
{
	dersKodu = dk; 
	strcpy(dersAdi, da) ; 
	
}
void Ders::  goster()
{
	cout<<"Ders Kod/Ad     : "<< dersKodu<< "  :  "<< dersAdi<< endl; 
}



