#ifndef OTOPARK_H
#define OTOPARK_H


class Otopark
{
    private:
        int saat;
        int secim;
        int aracCinsi;
        int toplamUcret;
        void hesapla();
    public:
        Otopark();
        ~Otopark();
        void menu();




};

#endif // OTOPARK_H
