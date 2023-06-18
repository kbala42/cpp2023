// pointer dizi

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


int main() {

    //string metin;
    char metin[30];
    char *p1, *p2;//baslangic ve bitis degeri adreslerini tutmak icin

    cout<<"Bir cumle giriniz:";

    //getline(cin, metin);
    gets(metin);

    for(p2=metin;*p2;p2++);//ilk olarak cumle'nin il karakteri adresine esitleterek baslatiyoruz
    // *p2 cumle icinde \0 gorunce duruyor
    p2--;//p2 son olarak \n de kaldigi icin adres degerini 1 azaltiyoruz

    bool kontrol;

    for(p1=metin;kontrol&&p1<p2;p1++,p2--)
    {
        if(*p1 != *p2)
            kontrol = false;
    }
    if(kontrol) cout<<"polidrom cumle"<<endl;

    else  cout<<"polidrom cumle degil"<<endl;

    return 0;
}
