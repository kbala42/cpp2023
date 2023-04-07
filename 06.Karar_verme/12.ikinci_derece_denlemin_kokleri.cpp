 /*
    Katsayýlarý girilen ax+b=c birinci derece denkleminin kökünü bulan program.
                                                                   Kamil Bala
*/

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int a,b,c;

    int delta;

    cout<< "a katsayisini giriniz: ";
    cin>>a;

    cout<< "b katsayisini giriniz: ";
    cin>>b;

    cout<< "c katsayisini giriniz: ";
    cin>>c;

    delta = b*b -4 * a * c;

    if (delta<0) cout<< "reel iki koku var";
    else if (delta == 0)
    {
        cout<< "esit iki koku var\n";
        cout<< "kokler:"<< -(b/2*a);
    }
    else
    {
        cout<< "iki koku var\n";
        cout<< "kok1:"<< (-b-sqrt(delta))/2*a<<endl;
        cout<< "kok2:"<< (-b+sqrt(delta))/2*a<<endl;
    }

    return 0;
}


