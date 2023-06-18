#include <iostream>
#include "DogumTarihi.h"

using namespace std;

DogumTarihi::DogumTarihi(){}

DogumTarihi::~DogumTarihi(){}

DogumTarihi::DogumTarihi(int _gun, int _ay, int _yil)
{
    gun = _gun;
    ay = _ay;
    yil = _yil;
}

int gun, ay, yil;
void DogumTarihi::setGun(int _gun )
{
    gun = _gun;
}
void DogumTarihi::setAy(int _ay)
{
    ay = _ay;
}
void DogumTarihi::setYil(int _yil)
{
    yil = _yil;
}

int DogumTarihi::getGun()
{
    return gun;
}
int DogumTarihi::getAy()
 {
     return ay;
 }
int DogumTarihi::getYil()
{
    return yil;
}
void DogumTarihi::ekle(int _gun, int _ay, int _yil)
{
    gun = _gun;
    ay = _ay;
    yil = _yil;
}
void DogumTarihi::goster()
{
    cout<<gun<<"/"<<ay<<"/"<<yil<<endl;
}
