#include<iostream>
using namespace std;

class Hayvan
{
    public:
        Hayvan()
        {

        }

        virtual void neYer() // sinifi soyut hale getiriyoruz.
        {
            cout<<"Ot yada Et yerim";
        }
};

class Kopek:public Hayvan
{

    public:

        void neYer()
        {
            cout<<"Et yerim"<<endl;
        }
};

class Koyun: public Hayvan
{
    public:

        void neYer()
        {
            cout<<"Ot yerim"<<endl;
        }
};

int main()
{
    Hayvan *ptr[2]; // Hayvan sinifindan bir pointer dizi tanimiliyoruz

    ptr[0] = new Kopek;
    ptr[1] = new Koyun;

    for(int i=0;i<3;i++)
    {
        ptr[i]->neYer();
        cout<<endl;
    }



    return 0;
}
