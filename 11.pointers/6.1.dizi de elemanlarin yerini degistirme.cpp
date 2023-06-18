// Pointer ile dizi elemanlarinin yerini degistirme


#include <iostream>
using namespace std;
//#define N 5



int main() {

    //int sayi[N];
    int sayi[100];

    int *p1,*p2, gecici, N;
    int i=1;
    cout<<"Kac sayi gireceksiniz:";cin>>N;

    for(p1=sayi;p1<sayi+N; p1++)
    {
        cout<<i<<". sayiyi giriniz:";cin>>*p1;
        i++;
    }

    cout<<"Dizi girildiginde ki sirasi"<<endl;

    for(p1=sayi;p1<sayi+N;p1++)
    {
        cout<<*p1<<"\t";
    }
    cout<<"\nDizi yer degistirdikten sonra ki sirasi"<<endl;

    for(p1=sayi, p2=sayi+N-1; p1<p2;p1++,p2--)
    {
        gecici= *p1;
        *p1 = *p2;
        *p2 = gecici;
    }
    for(p1=sayi;p1<sayi+N;p1++)
    {
        cout<<*p1<<"\t";
    }
    return 0;
}
