/*
    10 elemanlý bir diziyi girip, saklýyoruz.
    tek elemanlarýn sayýsý, toplamý ve ortalmasý
    çift elemanlarýn sayýsý, toplamý ve ortalmasý
*/
#include<iostream>
using namespace std;

int main()
{
    int sayi[10];
    int ciftAdet, tekAdet;
    int ciftToplam = 0, tekToplam = 0;

    for(int i=0; i<10; i++)
    {
        cout<< i+1 <<". sayiyi girin:"; cin>>sayi[i];
    }
    for(int i=0; i<10; i++)
    {
        //cout<< i+1 <<". sayi:"<< sayi[i]<<endl;
        if(sayi[i]%2 == 0) // cift sayi
        {
            ciftAdet++;
            ciftToplam += sayi[i]; // ciftToplam = ciftToplam + sayi[i]
        }
        else
        {
            tekAdet++;
            tekToplam += sayi[i];
        }
    }
    cout<< "teklerin adedi:"<<tekAdet<<endl;
    cout<< "teklerin toplami:"<<tekToplam<<endl;

    cout<< "ciftlerin adedi:"<<ciftAdet<<endl;
    cout<< "ciftlerin toplami:"<<ciftToplam<<endl;

    cout<< "teklerin ortalamasi:"<<tekToplam/tekAdet<<endl;
    cout<< "siftlerin ortalamasi:"<<ciftToplam/ciftAdet<<endl;

    cout<< "Girilen sayilarin toplami:"<<tekToplam+ciftToplam<<endl;
    cout<<"Sayilarin ortalmasi: "<< (tekToplam+ciftToplam)/10<<endl;
    cout<<"Sayilarin ortalmasi: "<< (float)(tekToplam+ciftToplam)/10<<endl;

    return 0;
}
