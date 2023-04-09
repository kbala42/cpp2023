/*
    Bir sınıftaki öğrencilerin numarası 5 ile 25 arasında değişmektedir. Sınıfa
    giren matematik öğretmeni Sercan, 3 ile tam bölünebilen öğrenci numaralarını bulduran
    bir program yazmak istediğini belirtmiştir. Siz matematik öğretmeninize kodları nasıl
    yazarak yardımcı olurdunuz

    Alinti:
    Deneyap Ortaokul Yazýlým Teknolojileri
    for cozumu

                                                        Kamil Bala

   https://www.geeksforgeeks.org/rand-and-srand-in-ccpp/
*/
#include<iostream>


using namespace std;

int main()
{


    for(int sayac=5; sayac<25;sayac++)
    {
        if(sayac%3==0) cout<< sayac<<endl;
    }

    return 0;
}
