#include<iostream>
using namespace std;

int main(){
	long detik,totaldetik;
	int jam,menit;
	
	cout << "Masukan Bilangan Angka Satuan Detik :";
	cin  >> detik;
	
	jam=(detik%86400)/3600;
	menit=(detik%3600)/60;
	totaldetik=detik%60;
	
    cout <<endl;
    cout << "Hasil Dari konversi Jam , Menit , Detik :" <<endl;
	cout << detik <<" "<< "detik" <<" "<< "=" <<" "<< jam << " " << "jam" << " " << menit << " " << "menit" << " " << totaldetik << " " << "detik" <<endl;
	
	return 0;
}


