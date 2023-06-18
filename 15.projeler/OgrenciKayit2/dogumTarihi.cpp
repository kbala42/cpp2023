#include "dogumTarihi.h"
#include <iostream >
using namespace std; 

 dogumTarihi :: dogumTarihi  () 
{
	gun= 01; 
	ay= 01; 
	yil = 2022; 
}
dogumTarihi :: dogumTarihi ( int g, int a, int y ) 
{
	gun= g; 
	ay= a; 
	yil = y; 
}

void dogumTarihi ::   setGun(int g )
{
	gun = g; 
}
void dogumTarihi ::  setAy(int a  )
{
	ay= a; 
 } 
void dogumTarihi ::  setYil (int y  )
{
	yil= y; 
 } 
int dogumTarihi ::  getGun( )
{
	return gun; 
}
int dogumTarihi :: getAy( )
{
	return ay; 
}
int dogumTarihi ::  getYil( )
{
	return yil; 
}
void dogumTarihi ::  ekle(int g, int a, int y) 
{
	gun= g, ay= a, yil=y; 
}

void dogumTarihi ::  goster() 
{
	cout<<"\nD. Tarihi       : "<< gun<< "."<< ay<< "."<< yil<< endl; 
}
