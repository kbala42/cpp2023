#ifndef DOGUMTARIHI_H
#define DOGUMTARIHI_H


class DogumTarihi
{
    private:
        int gun, ay, yil;

    public:
        DogumTarihi();
        DogumTarihi(int, int, int);
        ~DogumTarihi();

        void setGun(int );
        void setAy(int );
        void setYil(int );

        int getGun();
        int getAy( );
        int getYil();
        void ekle(int, int, int);
        void goster();


};

#endif // DOGUMTARIHI_H
