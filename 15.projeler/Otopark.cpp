#include<iostream>
#include "Otopark.h"
using namespace std;

void Otopark::hesapla()
    {
        cout<<"Saat :"; cin>>saat;

        if(aracCinsi == 1)
            toplamUcret = 10 + saat * 3;
        else if(aracCinsi == 2)
            toplamUcret = 14 + saat * 5;
        else if(aracCinsi == 3)
            toplamUcret = 18 + saat * 7;

        system("cls");
        cout<<"Toplam Ucret: "<< toplamUcret<<" TL\n\n";

        system("pause");

    }

    void Otopark::menu()
    {
        while(true)
        {
            cout<<"Otopark Uygulamasi\n\n";
            cout<<"Arac Cinsleri\n\n";
            cout<<"[1] Taksi\n";
            cout<<"[2] Minibus\n";
            cout<<"[3] Ticari Arac\n";
            cout<<"[0] Cikis\n";
            cout<<"[Seciminiz : ";cin>>secim;
            if(secim == 0)
            {
                cout<<"Cikis yaptiniz..\n";
                break;
            }
            else if(secim>0 && secim<4)
            {
                aracCinsi = secim;
                hesapla();
            }
        }


    }

