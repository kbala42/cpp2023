/*
    Tam bolunebilme

    Fonksiyona g�nderilen say� 5 ile tam b�l�n�yor ise ekrana �tam b�l�n�r.�
    aksi durumda kalan� yazd�ran fonksiyonu yazal�m.
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

        if(sonuc == 0)// e�it mi?
            cout<<degerler[i]<<" Tam bolunur"<<endl;
        else
            cout<<degerler[i]<<" kalan: "<<sonuc<<endl;
    }

    return 0;
}
