/*
    Tam bolunebilme

    Fonksiyona gönderilen sayý 5 ile tam bölünüyor ise ekrana “tam bölünür.”
    aksi durumda kalaný yazdýran fonksiyonu yazalým.
*/

#include<iostream>
using namespace std;

tamBolunurMu(int sayi)
{
    return sayi%5;// 5 e tam bolunebilme
}


int main()
{
    int sonuc;

    int degerler[5] ={15, 28, 30, 67, 120};

    for(int i=0; i<5; i++)
    {
        sonuc = tamBolunurMu(degerler[i]);

        if(sonuc == 0)// eþit mi?
            cout<<degerler[i]<<" Tam bolunur"<<endl;
        else
            cout<<degerler[i]<<" kalan: "<<sonuc<<endl;
    }

    return 0;
}
