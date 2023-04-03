/*
  1-100 arasında üçe bölünüp yediye bölünmeyen sayılari ve adedlerini yazdiran program,
*/
#include<iostream>

using namespace std;

int main()
{
    int adet=0;

    for (int sayac = 1; sayac<100; sayac++)
    {
        if((sayac%3==0)&&(sayac%7!=0))
        {
            cout<<sayac<<endl;
            adet++;
        }
    }
    cout<<"1-100 arasinda uce bolunup yediye bolunmeyenlerin sayisi:"<<adet<<endl;
    return 0;
}


