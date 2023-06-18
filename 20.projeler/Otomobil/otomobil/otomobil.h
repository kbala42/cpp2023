#include<iostream>
using namespace std;

class Otomobil
{
    private:
        string Renk;
        string Model;
        int BeygirGucu;
    public:
        Otomobil(string renk, string model, int beygirGucu);
        ~Otomobil();

        void ruhsatBilgileriniGoster();

        void setRenk(string renk);

        string getRenk();

        void setModel(string model);

        string getModel();

        void setBeygirGucu(int beygirGucu);

        int getBeygirGucu();
};
