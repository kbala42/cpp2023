/*
    Tutulan sayının tahmini bulmak için sayıdan küçük yada büyük olduğunu yazdırarıp,
    sayıyı bulduğunda tebrik yazısı ile birlikte kaç tahminde bulduğunu yazdıran program.

    Rastgele sayi üreterek kullanicinin bulmasını istiyoruz

                                                                Kamil Bala

*/

#include<iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    int rastgeleSayi, kullaniciTahmini, adet =1;

    srand(time(0));

    rastgeleSayi = rand() % 100 + 1; // 1 ile 100 arasi rastgele sayi uretiyoruz

    cout<<"Test icin, uretilen sayi:"<<rastgeleSayi<<endl;


    while (1) // Sonsuz donguye giriyoruz
    {
        cout<<"Tahmininiz:";cin>>kullaniciTahmini;

        if (kullaniciTahmini<rastgeleSayi)  cout<<"\nDaha buyuk sayi giriniz.\n";

        else if (kullaniciTahmini>rastgeleSayi)  cout<<"\nDaha kucuk sayi giriniz.\n";

        else
        {
            cout<<"\nTebrikler! "<<adet<<" tahminde bildiniz.\n";
            break; // donguyu sonlandiriyoruz
        }

        adet++;

    }

    return 0;

}
