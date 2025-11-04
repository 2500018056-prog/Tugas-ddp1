#include <iostream>
using namespace std;

int main() {
	int jam,menit;
	int detik;
	int hari;
	

	cout <<"Masukan angka >1 (dalam satuan detik) :";
	cin >> detik;
	
    hari=detik/86400;
	jam=(detik%86400)/3600;
	menit=(detik%3600)/60;
	detik=detik%60;
	
	cout << endl;
	cout << "hasil konversi:" <<endl;
	cout << detik << " " << "detik" << " " << "=" << " "<< hari << " "<<"hari" <<" "<< jam <<" "<< "jam"<< " " << menit <<" "<< "menit"<<" " << detik <<" "<< "detik";
    
}
