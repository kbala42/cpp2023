/*
    Çarpma eğitimi vermek için (1-10) rastgele sayılar üreterek
    sonuçlarını kullanıcının bulacağı program yapmak istiyoruz

                                                                Kamil Bala

*/

#include<iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));

    int sayi1= rand()%10+1;
    int sayi2= rand()%10+1;
    int sayi3 = sayi1 * sayi2;
    int sayiniz;

    tekrar:

    cout<<sayi1<<" x " << sayi2 << " = " ; cin>>sayiniz;

    if(sayiniz == sayi3)
    {
        cout<<sayi1<<" x " << sayi2 << " = " << sayi3;
        cout<<"...Tebrik ederim bildiniz"<<endl;
        main();
    }
    else
    {
        cout<<"Bilemediniz. Tekrar girin"<<endl;
        goto tekrar;
    }


    return 0;

}
