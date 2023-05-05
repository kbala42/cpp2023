#include<iostream>
using namespace std;

class Araba
{
    public:
        string renk;
        int kapiSayisi;
        int vitesSayisi;
        int MaxHiz;

    void ileriGit()
    {
        cout<<"ileri hareket ediyoruz.."<<endl;
    }

    void geriGit()
    {
        cout<<"Geriye hareket ediyoruz.."<<endl;
    }

    void durdur()
    {
        cout<<"durduruyoruz.."<<endl;
    }
};
int main()
{
    Araba togg1, togg2;
    Araba mercedes;

    togg1.renk = "Anadolu kirmizisi";
    togg1.kapiSayisi = 4;
    togg1.MaxHiz = 250;
    togg1.vitesSayisi = 5;
    togg1.ileriGit();

    togg2.renk = "Gri";
    togg2.kapiSayisi = 2;
    togg2.MaxHiz = 300;
    togg2.vitesSayisi = 6;
    togg2.geriGit();

    mercedes.renk = "Gri";
    mercedes.kapiSayisi = 4;
    mercedes.MaxHiz = 350;
    mercedes.vitesSayisi = 6;
    mercedes.ileriGit();

    return 0;
}
