/*
    Test uygulamasi

                                                                Kamil Bala

*/
#include<iostream>
using namespace std;


int main()
{
    string sorular[5][6]{
        {"4 x 5 = ", "A)10", "B)24", "C)20", "D)16", "20"},
        {"6 x 7 = ", "A)42", "B)36", "C)48", "D)35", "42"},
        {"8 x 3 = ", "A)16", "B)24", "C)30", "D)18", "24"},
        {"9 x 6 = ", "A)56", "B)48", "C)60", "D)54", "54"},
        {"7 x 4 = ", "A)26", "B)24", "C)28", "D)35", "28"}
    };
    char cevap;
    string cevaplar[5];

    for(int i=0; i<5; i++)
    {
        cout<<i+1<<". soru\t";
        cout<<sorular[i][0]<<endl;
        cout<<sorular[i][1]<<"\t";
        cout<<sorular[i][2]<<"\t";
        cout<<sorular[i][3]<<"\t";
        cout<<sorular[i][4]<<"\t";
        cout<<"cevabiniz:";cin>>cevaplar[i];
    }

    int dogruSayisi=0,yanlisSayisi=0;

    for(int i=0; i<5; i++)
    {
        if(cevaplar[i] == sorular[i][5])
        {
            cout<<i+1<<". soru dogru "<<endl;
            cout<<"cevabiniz   : "<<cevaplar[i]<<endl;
            cout<<"dogru cevap : "<<sorular[i][5]<<endl;
            dogruSayisi++;
        }
        else
        {
            cout<<i+1<<". soru yanlis "<<endl;
            cout<<"cevabiniz   : "<<cevaplar[i]<<endl;
            cout<<"dogru cevap : "<<sorular[i][5]<<endl;
            yanlisSayisi++;

        }
    }
    cout<<"Dogru sayisi: "<< dogruSayisi++<<endl;
    cout<<"Yanlis sayisi: "<< yanlisSayisi<<endl;
    return 0;
}
