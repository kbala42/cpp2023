#ifndef DOGUMTARIHI_H
#define DOGUMTARIHI_H

class dogumTarihi
{
	private: 
	int gun, ay, yil; 
	
	public: 
	dogumTarihi () ; 
	dogumTarihi (int, int, int ) ; 
	
	void setGun(int ); 
	void setAy(int ); 
	void setYil (int ); 
	int getGun( ); 
	int getAy( ); 
	int getYil( ); 
	void ekle(int, int, int ); 
	void goster() ;  
	
};

#endif
