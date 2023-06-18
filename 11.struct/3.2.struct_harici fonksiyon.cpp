#include<iostream>
using namespace std;

struct Kisi
{
    string ad;
    int yas;
    void mesaj()
    {
        cout<<"Merhaba"<<endl;
    }

};
void bilgiAl(Kisi nesne)
{
    cout<<nesne.ad<<endl;
    cout<<nesne.yas<<endl;
}
int main()
{
    Kisi kisi1;

    kisi1.ad = "Hasan";
    kisi1.yas=30;

    bilgiAl(kisi1);
    kisi1.mesaj();

    return 0;
}
