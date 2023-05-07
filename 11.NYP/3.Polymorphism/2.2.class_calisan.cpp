#include<iostream>
using namespace std;
class Calisan{
	protected:
		string Ad;
		string TCNo;
		string Soyad;
		double Maas;
	public:
		Calisan(){

		}

		virtual void zamYap(){
			Maas = Maas * 1.30;
			cout << Ad << " " << Maas << endl;
		}

};
class Muhendis: public Calisan{
	string Alan;
	string Birim;
	public:
		void zamYap(){
			Maas = Maas * 1.50 + 300;
			cout << Ad << " " << Maas << endl;
		}

};

class Muhasebe: public Calisan{
	string BagliOlduguBirim;
    public:

		void zamYap(){
			Maas = Maas * 1.10 + 250;
			cout << Ad << " " << Maas << endl;
		}
};
class Hizmetli: public Calisan{
	string CalistigiBirim;
		public:
		void zamYap(){
			Maas = Maas * 1.20 + 50;
			cout << Ad << " " << Maas << endl;
		}

};

main(){

	Calisan *ptr[3];
	ptr[0] = new Muhendis;
	ptr[1] = new Hizmetli;
	ptr[1] = new Muhasebe;

	//ptr[0] = new Muhendis("Ahmet", 10000);
/*
	ptr[1] = new Hizmetli("Ayse", 10000);
	ptr[2] = new Muhasebe("Fuat", 10000);

	for(int i = 0; i < 3; i++){
		ptr[i]->zamYap();
	}
*/
}
