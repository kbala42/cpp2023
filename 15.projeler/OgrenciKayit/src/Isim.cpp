#include "Isim.h"
#include <iostream>
#include <stdlib.h>
#include<string.h>

using namespace std;

Isim::Isim(){}

Isim::~Isim(){}

Isim::Isim(char *_ad, char *_soyad)
{
    strcpy(ad, _ad);
    strcpy(ad, _soyad);
}

void Isim::setAd(char *_ad)
{
    strcpy(ad, _ad);
}

void Isim::setSoyad(char *_soyad)
{
    strcpy(ad, _soyad);
}

char * Isim:: getAd()
{

}
char * Isim:: getSoyad()
{

}
void Isim::ekle(char *_ad, char *_soyad)
{
    strcpy(ad, _ad);
    strcpy(ad, _soyad);
}
void Isim::goster()
{

}
