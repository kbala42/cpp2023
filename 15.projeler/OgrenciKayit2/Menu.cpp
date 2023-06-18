#include "Menu.h"
#include <iostream>
#include "Ogrenci.h"
#include "dogumTarihi.h"
#include "Isim.h"
#include "Ders.h"
#include <stdio.h>
#include <fstream>



using namespace std; 

Ogrenci o1; 
dogumTarihi dt1; 
Ders d1; 
Isim i1; 



Menu::Menu()
{
}

Menu::~Menu()
{
}

void Menu :: inputAl( char *ptr ) 
{
	scanf( " %[^\n]s", ptr) ; 
}

int Menu :: anaEkran() 
{
	int secim; 
	cout<<"\nOGRENCI DERS KAYIT UYGULAMASI \n\n"; 
	cout<<"[1] Yeni Ogrenci Kaydi "<< endl; 
	cout<<"[2] Kayitli Ogrencileri Listele "<< endl; 
	cout<<"[3] Ogrenci Kaydi Sil "<< endl; 
	cout<<"[4] Ogrenci Kaydi Bul  "<< endl; 
	cout<<"[5] En Yuksek Ortalamali Ogrenciyi Goster "<< endl; 
	cout<<"[0] CIKIS  "<< endl;
	cout<<"Seciminiz   : "; cin>>secim; 
	return secim; 
	
}
void Menu ::  giris()
{
	int secim = anaEkran() ; 
	while( secim != 0) 
	{
		switch( secim )
		{
			case 1: yeniKayit(); break; 
			case 2: listele() ; break; 
			case 3: kayitSil() ; break; 
			case 4: kayitBul() ; break; 
			case 5: enYuksekOrtlama() ; break; 
			default : cout<<"Hatali secim !!! "<< endl; break; 
		}
		secim= anaEkran() ; 
	}
	
	cout<<"Programdan cikis yaptiniz..."<< endl; 
	
	
 } 
void Menu ::  yeniKayit()
{
	system("cls") ; 
	
	char kelime  [30]; 
	
	cout<< "\n Yeni Ogrenci Kayit Ekrani..."<< endl; 
	cout<<"Ogrenci Kimlik Bilgileri : "<< endl; 
	
	cout<<"Ad      : "; inputAl(kelime );  i1.setAd(kelime) ; 
	cout<<"Soyad   : "; inputAl(kelime );  i1.setSoyad(kelime) ; 
	
	cout<<"Dogum Tarihi Bilgileri : "<< endl; 
	cout<<"Gun   : "; inputAl(kelime ); 
	int gun= atoi(kelime); 	dt1.setGun( gun );   
	cout<<"Ay    : "; inputAl(kelime ); 
	int ay= atoi(kelime); 	dt1.setAy( ay );
	cout<<"Yil   : "; inputAl(kelime ); 
	int yil= atoi(kelime); 	dt1.setYil( yil  ); 
	
	cout<<"Ogrenci Ders Bilgileri : "<< endl; 
	
	cout<<"Ders Kodu  : "; inputAl(kelime );  
	int kod= atoi(kelime); 	d1.setDersKodu(kod ) ; 
	cout<<"Ders Adi   : "; inputAl(kelime ); d1.setDersAdi(kelime); 
	
	cout<<"Ogrenci Numarasi : "; inputAl(kelime );  
	int sayi = atoi(kelime); 	o1.setNumara( sayi ) ;
	cout<<"Ogrenci Not Ortalamasi : "; inputAl(kelime );  
	sayi = atoi(kelime); 	o1.setOrtalama( sayi ) ;

	cout<<"Girilen veriler "<< endl; 
	
	o1.Kaydet(dt1,d1,i1,o1.getNumara(), o1.getOrtalama()	)  ; 
	
	o1.Goster() ; 
	
	ofstream file ( "ogrenciler.txt", ios::app ) ; 
	file.write((char * ) &o1, sizeof(o1) ) ; 
	file.close(); 
	system("cls") ; 
	cout<<"\nYeni Ogrenci Kayit Edildi"<< endl<< endl;
	system("pause"); 
	
 } 
void Menu ::  listele()
{
	system("cls"); 
	ifstream file ( "ogrenciler.txt" ) ; 
	int sayac=0; 
	while( file.read ((char * ) &o1, sizeof(o1) ) !=NULL  ) 
	{
		sayac++; 
		o1.Goster() ; 
	}
	if( sayac==0)
	cout<<"Kayitli ogrenci yok !"<< endl; 
	else
	cout<<"\nToplam Ogrenci Sayisi : "<< sayac<< endl<< endl; 
	
	
	file.close(); 
	 
	system("pause"); 
	
	
}
void Menu :: kayitSil()
{
	system("cls"); 
	//listele() ; 
	cout<<"\nSilmek Istediginiz Ogrenci Numarasi : "; 
	int sayi;
	char kelime[10];  
	inputAl(kelime); 
	sayi= atoi(kelime); 
	ifstream file ( "ogrenciler.txt" ) ;
	ofstream file2 ( "yedek.txt" ) ;
	 
	int sayac=0;
	bool sonuc= false;  
	while( file.read ((char * ) &o1, sizeof(o1) ) !=NULL  ) 
	{
		if( sayi  == o1.getNumara() ) 
		{
			sonuc= true; 
		}
		else
		{
			file2.write ((char * ) &o1, sizeof(o1) ) ;  
		}
 	}
 	
	
	file.close(); 
	file2.close(); 
	if( sonuc  )
	{
	remove("ogrenciler.txt") ; 
	rename("yedek.txt", "ogrenciler.txt") ; 
	cout<<sayi<< " Numarali kayit silindi "<< endl; 
		
	}
	else 
	cout<<endl<<sayi << " Numarali ogrenci kaydi bulunamadi !"<< endl<< endl ; 
	 
	system("pause"); 
	
	
	
}
void Menu ::  kayitBul()
{
	system("cls"); 
	//listele() ; 
	cout<<"\nAradiginiz Ogrenci Numarasi : "; 
	int sayi;
	char kelime[10];  
	inputAl(kelime); 
	sayi= atoi(kelime); 
	ifstream file ( "ogrenciler.txt" ) ; 
	int sayac=0;
	bool sonuc= false;  
	while( file.read ((char * ) &o1, sizeof(o1) ) !=NULL  ) 
	{
		if( sayi== o1.getNumara() ) 
		{
			sonuc= true; 
			break; 
		}
 	}
 	
	
	file.close(); 
	
	if( sonuc  )
	{
	cout<<endl<<endl ; 
	o1.Goster() ; 
	cout<<endl; 
	}
	else 
	cout<<endl<<sayi << " Numarali ogrenci kaydi bulunamadi !"<< endl<< endl ; 
	 
	system("pause"); 
	
	
}

void Menu ::  enYuksekOrtlama()
{
	system("cls"); 
	//listele() ;  
	ifstream file ( "ogrenciler.txt" ) ; 

	 Ogrenci buyukOgr = o1;
	 int sayac=0;   
	while(  file.read ((char * ) &o1, sizeof(o1) ) !=NULL  ) 
	{
		sayac++; 
		if(  buyukOgr.getOrtalama() < o1.getOrtalama()  ) 
		{	
		 	buyukOgr = o1; 
		}
 	}
 	
	
	file.close(); 
	
	if( sayac ==0   )
	{
		cout<<"Kayitli ogrenci yok "<< endl; 
	}
	else 
	{
		system("cls") ; 
	cout<<"Ortalamasi en yuksek ogrenci bilgileri : "<< endl; 
	buyukOgr.Goster(); 	
	}
	 
	system("pause"); 
	
	
	
} 
