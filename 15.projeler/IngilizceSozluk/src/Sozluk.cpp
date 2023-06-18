#include "Sozluk.h"
#include <iostream >
#include <cstdlib>
#include <string.h>
#include <cstring>
#include <fstream>
#include "Kelime.h"
#include <cstdio>

using namespace std;

Kelime k1, k2;

void Sozluk:: turkceIngilizce()
{
	char kelime[30];
	cout<<"Turkce Kelime : "; scanf(" %[^\n]s", kelime ) ;

	bool sonuc=false;
	int sayac=0;
	ifstream file("kelimeler.txt" ) ;
	while( file.read ( (char * ) &k1, sizeof(k1) ) !=NULL  )
	{
		sayac++;

		if( strcmp ( kelime, k1.tKelime) ==0 )
		{
			sonuc= true;
		cout<<"\nSiraNo\t"<<"Turkce\t"<< "Ingilizce"<< endl;
		sayac++;
		cout<<sayac << "\t"<< k1.tKelime<< "\t"<<k1.iKelime<< endl;
 		}


	}
	file.close();

	if( !sonuc )
	cout<<endl<< kelime << " kelimesi bulunamidi !: " << endl<< endl;


}
void Sozluk:: ingilizceTurkce()
{
	char kelime[20];
	cout<<"ingilizce kelime : "; scanf(" %[^\n]s", kelime ) ;

	bool sonuc=false;
	int sayac=0;
	ifstream file("kelimeler.txt" ) ;
	while( file.read ( (char * ) &k1, sizeof(k1) ) !=NULL  )
	{
		sayac++;

		if( strcmp ( kelime, k1.iKelime) ==0 )
		{
		sonuc= true;
		cout<<"\nSiraNo\t"<<"Ingilizce\t"<< "Turkce"<< endl;
		sayac++;
		cout<<sayac << "\t"<< k1.iKelime<< "\t"<<k1.tKelime<< endl;
 		}


	}
	file.close();

	if( !sonuc )
	cout<<endl<< kelime << " kelimesi bulunamadi !: " << endl<< endl;

}
void Sozluk:: kelimeEkle()
{
	cout<<"Kelime ekleme islemi... "<< endl<< endl;

//	cout<<"Turkce Kelime : "; cin>>k1.tKelime;
//	cout<<"Ingilizcesi : "; cin>>k1.iKelime ;

	cout<<"Turkce Kelime : "; scanf(" %[^\n]s", k1.tKelime) ;
	cout<<"Ingilizcesi : "; scanf(" %[^\n]s", k1.iKelime ) ;



	ofstream file("kelimeler.txt", ios::app  ) ;
	file.write( (char * ) &k1, sizeof(k1) ) ;
	file.close();
	cout<<"Kelime kaydi  tamam "<< endl;
}

void Sozluk :: kelimeBul()
{
	int secim= menuBul();
	while( secim != 0 )
	{
		switch(secim )
		{
			case 1 : turkceIngilizce() ; break;
			case 2 : ingilizceTurkce() ; break;
			default : cout<<"Hatali secim ! "<< endl; break ;

		}
		secim= menuBul() ;
	}



}
void Sozluk ::  kelimeSil()
{
	listele();
	int numara;
	bool sonuc=false;
	cout<<"Silinecek kelimenin numarasi ? "; cin>>numara;

	ifstream file("kelimeler.txt" ) ;
	ofstream file2("yedek.txt" ) ;
	 int sayac=0;
	while( file.read ( (char * ) &k1, sizeof(k1) ) !=NULL  )
	{
		sayac++;
		if(sayac== numara )
		{
			sonuc= true;
		 }
		 else
		 {
		 	file2.write( (char * ) &k1, sizeof(k1) ) ;
		 }

	}
	file.close();
	file2.close();

	if( sonuc)
	{
	cout<<numara << " numarali kelime silindi "<< endl<< endl;
	remove("kelimeler.txt") ;
	rename("yedek.txt", "kelimeler.txt") ;

	}
	else
	cout<<numara << " numarali kelime bulunamadi "<<endl;


 }
void Sozluk :: listele()
{
	// cout<<"SiraNo\t"<<"Turkce\t"<< "Ingilizce"<< endl;
	printf("%-20s%-30s%-30s\n", "SýraNo", "Turkce", "Ingilizce" ) ;

	int sayac=0;

	ifstream file("kelimeler.txt" ) ;
	while( file.read ( (char * ) &k1, sizeof(k1) ) !=NULL  )
	{
		sayac++;
		//cout<<sayac << "\t"<< k1.tKelime<< "\t"<<k1.iKelime<< endl;
		printf("%-20d%-30s%-30s\n", sayac, k1.tKelime, k1.iKelime ) ;

	}
	file.close();

	if( sayac != 0)
	cout<<"\nToplam kelime sayisi : "<< sayac<< endl<< endl;
	else
	cout<<"Kelime kaydi bulunamadi "<<endl;
}

int  Sozluk:: menuBul()
{
	int secim;
	cout<<"\n\n\tKELIME BULMA "<< endl<< endl;
	cout<<"[1]\t TURKCE- INGILIZCE  "<< endl;
	cout<<"[2]\t INGILIZCE - TURKCE   "<< endl;
	cout<<"[0]\t ANA MENUYE DON   "<< endl;
	cout<<"\n\tSeciminiz ?          :   ";
	cin>>secim;
	system("cls") ;
	return secim;
}



int Sozluk:: menu()
{



	int secim;
	cout<<"\n\nSOZLUK UYGULAMASI "<< endl<< endl;
	cout<<"[1] Kelime Ekle  "<< endl;
	cout<<"[2] Kelime Bul  "<< endl;
	cout<<"[3] Kelime Sil "<< endl;
	cout<<"[4] Kelimeleri Listele "<< endl;
	cout<<"[0] Programi Kapat   "<< endl;
	cout<<"\nSeciminiz          :   ";
	cin>> secim;
	system("cls") ;
	return secim;
}



void Sozluk::   giris()
{
	int secim= menu();
	while( secim != 0 )
	{
		switch(secim )
		{
			case 1 : kelimeEkle() ; break;
			case 2 : kelimeBul() ; break;
			case 3 : kelimeSil() ; break;
			case 4 : listele() ; break;
			default : cout<<"Hatali secim ! "<< endl; break ;

		}
		secim= menu();
	}
}



