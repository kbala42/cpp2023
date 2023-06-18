/*
    Bir meyve sýnýfý oluþturup içerisinde ekrana “Ben meyve sinifiyim” diyen bir
    meyve sýnýfýndan türetilen Elma ve Muz sýnýflarýný oluþturunuz. Türetilmiþ bu sýnýflarýn
    içerisinde meyvelerin renklerini ekrana yazdýrýp, tüm sýnýflar için birer nesne tanýmlayýnýz
*/
#include <iostream>
using namespace std;
class Meyve {
    public:
        Meyve()
        {
            cout<<"Ben meyveyim."<<endl;
        }
};
class Elma: public Meyve
{
    public:
        Elma()
        {
            cout<<"Ben kirmizi renkliyim!!"<<endl;
        }
};
class Muz: public Meyve {
    public:
        Muz()
        {
            cout<<"Ben sari renkliyim!!"<<endl;
        }
};

int main() {
    Elma e;
    Muz m;
}
