#include<iostream>
using namespace std;
class Calisan{
	protected:

	public:
		Calisan(){

		}

		virtual void zamYap(){

		}

};
class Muhendis: public Calisan{

	public:
		void zamYap(){
			cout << "Muhendise zam yapidi"<< endl;
		}

};

class Muhasebe: public Calisan{

    public:
		void zamYap(){
			cout << "Muhasebeciye zam yapidi"<< endl;
		}
};
class Hizmetli: public Calisan{

    public:
		void zamYap(){
			cout << "Hizmetliye zam yapidi"<< endl;
		}

};

main(){

	Calisan *ptr[3];
	ptr[0] = new Muhendis;
	ptr[1] = new Muhasebe;
	ptr[2] = new Hizmetli;


	for(int i = 0; i < 3; i++){
		ptr[i]->zamYap();
	}

}
