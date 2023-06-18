// pointer ile dizi boyunu bulma

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


int main() {

    //string metin;
    char metin[30];
    char *p;

    cout<<"Bir cumle giriniz:";

    //getline(cin, metin);
    gets(metin);

    for(p=metin;*p;p++);

    cout<<"Metin uzunlugu: "<<p-metin<<endl;// pointer'ýn son degeri - baslangic degeri

    return 0;
}
