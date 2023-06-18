/*
    Farklý parametre sayýsý kullanarak fonksiyon aþýrý yükleme.
*/
#include<iostream>
using namespace std;

class Temel
{
    public:
        void yaz()
        {
            cout << "Temel Fonksiyon" << endl;
        }
};

class Turetilmis : public Temel
{
    public:
        void yaz()
        {
            cout << "Turetilmis Fonksiyon" << endl;
        }
};
int main()
{
    Turetilmis turet1, turet2;
    turet1.yaz();
    turet2.Temel::yaz();
    return 0;
}
