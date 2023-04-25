/*
    Katar Kullanici Girişi

                                                                Kamil Bala

*/
#include<iostream>
#include <string>
#include <conio.h>
using namespace std;


int main()
{

    string kullaniciAdi ="";
    char ka;
    cout<<"Kullanici adini giriniz:";
    ka = _getch();

    while(ka != 13){//13 karakter Enter karsilik
      kullaniciAdi.push_back(ka);
      cout << '*';
      ka = _getch();
   }
   cout<<"\nKullanici adi:"<<kullaniciAdi<<endl;

   string parola ="";
   char ch;
   cout << "Sifre girin: ";
   ch = _getch();
   while(ch != 13){//13 karakter Enter karsilik
      parola.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(parola == "Admin"){
      cout << "\nGiris basarili...!\n";
   }else{
      cout << "\nGiris basarisiz...!\n";
   }

    return 0;
}
