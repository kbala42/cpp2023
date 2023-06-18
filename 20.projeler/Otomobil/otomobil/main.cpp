#include<iostream>
#include"otomobil.h"
using namespace std;

int main()
{
    Otomobil oto1("Kirmizi", "Opel",90);
    Otomobil oto2("Gri", "Fiat",120);

    oto2.setModel("BMW");

    Otomobil* p = new Otomobil("Kirmizi", "TOGG",120);
    p->setRenk("Mavi");
    p->ruhsatBilgileriniGoster();


    delete p;

    /*
    oto1.renk="Kirmizi";
    oto1.model="Opel";
    oto1.beygirGucu=90;

    oto2.renk="Gri";
    oto2.model="Fiat";
    oto2.beygirGucu=120;
*/
    oto1.ruhsatBilgileriniGoster();
    cout<<"\n\n";
    oto2.ruhsatBilgileriniGoster();



    return 0;
}
