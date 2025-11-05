#include<iostream>
using namespace std;

int main(){
	long detik,jumlahkeseluruhandetik;
	int jam,menit;
	
	cout << "Masukan Bilangan Angka Satuan Detik :";
	cin  >> detik;
	
	jam=(detik%86400)/3600;
	menit=(detik%3600)/60;
	jumlahkeseluruhandetik=detik%60;
	
    cout <<endl;
    cout << "Hasil Dari konversi Jam , Menit , Detik :" <<endl;
	cout << detik <<" "<< "detik" <<" "<< "=" <<" "<< jam << " " << "jam" << " " << menit << " " << "menit" << " " << jumlahkeseluruhandetik << " " << "detik" <<endl;
	
	return 0;
}



