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

int main()
{
    Kisi kisi1;

    kisi1.ad = "Hasan";
    kisi1.yas=30;

    cout<<kisi1.ad<<endl;
    cout<<kisi1.yas<<endl;
    kisi1.mesaj();

    return 0;
}
