#include<iostream>
using namespace std;

struct Adres
{
    string mah;
    string sk;
    string apt;
    string ilce;
    string il;
    int kapiNo;

};

struct Kisi
{
    string ad;
    string soyad;
    int yas;
    double boy;
    Adres adr;

};

int main()
{
    Kisi kisi1, kisi2;

    kisi1.ad = "Hasan";
    kisi1.soyad= "Kara";
    kisi1.yas=30;
    kisi1.boy = 1.75;
    kisi1.adr.mah="Tasliman";
    kisi1.adr.sk="5. sokak";
    kisi1.adr.apt="Liman";
    kisi1.adr.kapiNo=5;
    kisi1.adr.ilce = "Cinarcik";
    kisi1.adr.il ="Yalova";

    kisi2.ad = "Ahmet";
    kisi2.soyad= "Can";
    kisi2.yas=40;
    kisi2.boy = 1.80;
    kisi2.adr.mah="Ferhuniye";
    kisi2.adr.sk="Yazir";
    kisi2.adr.apt="Nedim";
    kisi2.adr.kapiNo=20;
    kisi2.adr.ilce = "Selcuklu";
    kisi2.adr.il ="Konya";


    cout<<"1. kisi bilgileri"<<endl;
    cout<<kisi1.ad<<endl;
    cout<<kisi1.soyad<<endl;
    cout<<kisi1.yas<<endl;
    cout<<kisi1.boy<<endl;
    cout<<kisi1.adr.mah<<endl;
    cout<<kisi1.adr.sk<<endl;
    cout<<kisi1.adr.apt<<endl;
    cout<<kisi1.adr.kapiNo<<endl;
    cout<<kisi1.adr.ilce<<endl;
    cout<<kisi1.adr.il<<endl;

    cout<<"\n2. kisi bilgileri"<<endl;
    cout<<kisi2.ad<<endl;
    cout<<kisi2.soyad<<endl;
    cout<<kisi2.yas<<endl;
    cout<<kisi2.boy<<endl;
    cout<<kisi2.adr.mah<<endl;
    cout<<kisi2.adr.sk<<endl;
    cout<<kisi2.adr.apt<<endl;
    cout<<kisi2.adr.kapiNo<<endl;
    cout<<kisi2.adr.ilce<<endl;
    cout<<kisi2.adr.il<<endl;

    return 0;
}
