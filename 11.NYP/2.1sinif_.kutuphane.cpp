#include<iostream>
#include<cstring>
#include<clocale>

using namespace std;

class Card
{
    private:
        char kitapAdi[30];
        char yazarAdi[30];
        int adet;
    public:
        void store(char *, char *, int );
        void show();
};
void Card :: store(char *ka, char *yz, int adt)
{
    strcpy(kitapAdi, ka);
    strcpy(yazarAdi,yz);
    adet = adt;
}
void Card::show()
{
    cout<<"\nKitap Adý: "<<kitapAdi<<"\nYazarý: "<<yazarAdi<<"\nAdeti: "<<adet<<endl;
}
int main()
{

    return 0;
}
