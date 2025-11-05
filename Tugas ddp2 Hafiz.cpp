#include <iostream>
using namespace std;

int main() {
	int jam,menit;
	int detik;
	int hari;
	

	cout <<"Masukan Bilangan Angka Satuan Detik :";
	cin >> detik;
	
    hari=detik/86400;
	jam=(detik%86400)/3600;
	menit=(detik%3600)/60;
	detik=detik%60;
	
	cout << endl;
	cout << "Hasil konversi Dari Jam , Menit , Detik :" <<endl;
	cout << detik << " " << "detik" << " " << "=" << " "<< hari << " "<<"hari" <<" "<< jam <<" "<< "jam"<< " " << menit <<" "<< "menit"<<" " << detik <<" "<< "detik";
    
}

