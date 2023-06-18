/*
    Test uygulamasi

                                                                Kamil Bala

*/
#include<iostream>
using namespace std;

string cevaplar[5];

void soruYazdir()
{
    string sorular[5][6]{
        {"4 x 5 = ", "A)10", "B)24", "C)20", "D)16", "20"},
        {"6 x 7 = ", "A)42", "B)36", "C)48", "D)35", "42"},
        {"8 x 3 = ", "A)16", "B)24", "C)30", "D)18", "24"},
        {"9 x 6 = ", "A)56", "B)48", "C)60", "D)54", "54"},
        {"7 x 4 = ", "A)26", "B)24", "C)28", "D)35", "28"}
    };

    for(int i=0; i<5; i++)
    {
        cout<<i+1<<". soru\t"<<sorular[i][0]<<endl;// soru yazdirma
        for(int j=1; j<5; j++)
        {
            cout<<sorular[i][j]<<"\t";
        }
        cout<<"\nCevabiniz:";cin>>cevaplar[i];
    }
    for(int i=0; i<5; i++) cout<<cevaplar[i]<<endl;
}
string dogruCevapKontrol(int a)
{
    //cout<<a<<endl;
          string dogrular[5][1]{
                                {"20"},
                                {"42"},
                                {"24"},
                                {"54"},
                                {"28"}
                                };


    return dogrular[a][0]; // dogru cevap
}

int main()
{
    char cevap;

    int dogruSayisi=0,yanlisSayisi=0;

    soruYazdir();

    for(int i=0; i<5; i++)
    {
        cout<<dogruCevapKontrol(i)<<endl;

        if(cevaplar[i] == dogruCevapKontrol(i))
        {
            cout<<i+1<<". soru dogru "<<endl;
            cout<<"cevabiniz   : "<<cevaplar[i]<<endl;
            cout<<"dogru cevap : "<<dogruCevapKontrol(i)<<endl;
            dogruSayisi++;
        }
        else
        {
            cout<<i+1<<". soru yanlis "<<endl;
            cout<<"cevabiniz   : "<<cevaplar[i]<<endl;
            cout<<"dogru cevap : "<<dogruCevapKontrol(i)<<endl;
            yanlisSayisi++;

        }

    }
    cout<<"\n----------------\n";
    cout<<"Dogru sayisi: "<< dogruSayisi++<<endl;
    cout<<"Yanlis sayisi: "<< yanlisSayisi<<endl;
    return 0;
}
