#ifndef KIMLIK_H
#define KIMLIK_H


class kimlik
{
    public:
        void menu();
        //kimlik();


    private:
        char strTCNo[12];
        int intTCNo[11];
        bool sonuc;
        bool birinciKural();
        bool ikinciKural();
        bool ucuncuKural();
        void inputAl() ;
};

#endif // KIMLIK_H
