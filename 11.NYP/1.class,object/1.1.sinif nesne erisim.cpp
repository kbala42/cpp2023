#include<iostream>
using namespace std;

class Sinif
{
    private:
        int sayi1;

    public:
        int sayi2;

    Sinif(int sayi1)
    {
        sayi2=sayi1;
    }
    void goster()
    {
        cout<<"sayi 1: "<<sayi1<<endl;
        cout<<"sayi 2: "<<sayi2<<endl;
    }

};
int main()
{
    Sinif nesne1(10);
    nesne1.goster();

    // nesne1.sayi1= 30; // private degiskene/ozellige disardan erisilemez
    nesne1.sayi2= 50;
    nesne1.goster();

    return 0;
}
