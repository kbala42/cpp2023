#include<iostream>
using namespace std;

class Okul
{
    public:
        Okul()// constructor
        {
          cout<<"Okul sinifi calisti"<<endl;
        }


};
class Ogrenci:Okul
{
    public:
        Ogrenci()
        {
            cout<<"Ogrenci sinifi calisti"<<endl;
        }


};
class Ogretmen:Okul
{
    public:
        Ogretmen()
        {
            cout<<"Ogretmen sinifi calisti"<<endl;
        }


};
class YardimciPersonel:Okul
{
    public:
        YardimciPersonel()
            {
                cout<<"Yardimci Personel sinifi calisti"<<endl;
            }

};
class Idareci:Ogretmen // her idareci bir ogretmendir
{
    public:
        Idareci()
        {
            cout<<"Idareci sinifi calisti"<<endl;
        }


};
class Mudur:Idareci // her mudur hem ogretmen hem de idarecidir
{
    public:
        Mudur()
        {
            cout<<"Mudur sinifi calisti"<<endl;
        }


};
int main()
{
    Ogrenci ogrenci1;

    //Ogretmen ogretmen1;

    //YardimciPersonel yarPer1;

    //Mudur mudur;

    return 0;
}
