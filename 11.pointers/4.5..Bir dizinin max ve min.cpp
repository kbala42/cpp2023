// pointer ile dizi max ve min bulma

#include <iostream>

using namespace std;
#define N 5

int main() {

    int sayi[N], max, min;
    int *p;
    int i=1;
    for(p=sayi;p<sayi+N; p++)
    {
        cout<<i<<". sayiyi giriniz:";cin>>*p;
        i++;
    }
    max=min=sayi[0];

    for(p=sayi;p<sayi+N; p++)
    {
         if (*p>max) max=*p;
         if (*p<min) min=*p;
    }
    cout<<"en  buyuk sayi:"<<max<<endl;
    cout<<"en  kucuk sayi:"<<min<<endl;

    return 0;
}
