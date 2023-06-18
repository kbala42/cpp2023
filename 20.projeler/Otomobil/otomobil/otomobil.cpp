#include"otomobil.h"

Otomobil::Otomobil(string renk, string model, int beygirGucu)
{
        Renk = renk;
        Model = model;
        BeygirGucu = beygirGucu;
}
Otomobil::~Otomobil()
{
    cout<<endl;
    cout<<Otomobil::Model<<" nesnesinin destructure'i cagrildi.."<<endl;
}
void Otomobil::ruhsatBilgileriniGoster()
{
    cout<<"Model : "<<Otomobil::Model<<endl;
    cout<<"Renk : "<<Otomobil::Renk<<endl;
    cout<<"Beygir gucu : "<<Otomobil::BeygirGucu<<endl;


}
void Otomobil::setRenk(string renk)
{
    Renk = renk;
}
string Otomobil::getRenk()
{
    return Renk;
}

void Otomobil::setModel(string model)
{
    Model = model;
}
string Otomobil::getModel()
{
    return Model;
}


void Otomobil::setBeygirGucu(int beygirGucu)
{
    BeygirGucu = beygirGucu;
}
int Otomobil::getBeygirGucu()
{
    return BeygirGucu;
}
