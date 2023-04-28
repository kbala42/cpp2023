#include<iostream>
using namespace std;

class Sinif
{
    private:
        int sayi1;

    public:
        int sayi2;

    Sinif(int s1, int s2)
    {
        sayi2=s1;
        sayi1=s2;
    }
    void goster()
    {
        cout<<"sayi 1: "<<sayi1<<endl;
        cout<<"sayi 2: "<<sayi2<<endl;
    }

};
int main()
{
    Sinif nesne1(10,20),nesne2(300, 500);
    Sinif *pNes;

    pNes = &nesne2;

    pNes->goster();

    return 0;
}
