// pointer ile dizi boyunu bulma

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;


int main() {

    //string metin;
    char metin[30];
    char karakter;
    char *p;

    cout<<"Bir cumle giriniz:";

    //getline(cin, metin);
    gets(metin);

    cout<<"silmek istediginiz harf:"; cin>>karakter;

    for(p=metin; *p; p++)
    {
        if (*p==karakter) strcpy(p,p+1);
    }

    cout<<"Yeni metin: "<<metin;

    return 0;
}
