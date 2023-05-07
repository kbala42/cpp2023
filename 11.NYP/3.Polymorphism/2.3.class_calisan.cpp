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
		Calisan(string ad, string soyad, string tcNo, double maas){
			Ad = ad;
			Soyad = soyad;
			TCNo = tcNo;
			Maas = maas;
		}
		Calisan(string ad, double maas){
			Ad = ad;
			Maas = maas;
		}
		void setMaas(double maas){
			Maas = maas;
		}
		void getMaas(){
			cout << Maas << endl;
		}

		void zamYap(){
			Maas = Maas * 1.30;
			cout << Ad << " " << Maas << endl;
		}

};
class Muhendis: public Calisan{
	string Alan;
	string Birim;
	public:
		Muhendis(string ad, string soyad, string alan){
			Ad = ad;
			Soyad = soyad;
			Alan = alan;

		}
		Muhendis(string ad, double maas):Calisan(ad, maas){

		}
		void zamYap(){
			Maas = Maas * 1.50 + 300;
			cout << Ad << " " << Maas << endl;
		}

};
class Muhasebe: public Calisan{
	string BagliOlduguBirim;
		public:
		Muhasebe(string ad, double maas):Calisan(ad, maas){

		}
		void zamYap(){
			Maas = Maas * 1.10 + 250;
			cout << Ad << " " << Maas << endl;
		}
};
class Hizmetli: public Calisan{
	string CalistigiBirim;
		public:
			Hizmetli(string ad, double maas):Calisan(ad, maas){

			}
		void zamYap(){
			Maas = Maas * 1.20 + 50;
			cout << Ad << " " << Maas << endl;
		}

};
main(){

	Calisan *ptr[3];
	ptr[0] = new Muhendis("Ahmet", 10000);
	ptr[1] = new Hizmetli("Ayse", 10000);
	ptr[2] = new Muhasebe("Fuat", 10000);

	for(int i = 0; i < 3; i++){
		ptr[i]->zamYap();
	}

}
