#include<iostream>
using namespace std;

int main(){
	int jam, menit, detik;
	long jumlahkeseluruhanDetik;
	
	cout<< "Masukan Bilangan Angka Satuan Detik :";
	cin>> detik;
	
	jam=(detik%86400)/3600;            // Sisa setelah hari dibagi 3600
	menit=(detik%3600)/60;            // Sisa setelah jam dibagi 60
	jumlahkeseluruhandetik=detik%60; // Sisa detik terakhir
	
    cout<<endl;
    cout<<"Hasil konversi Dari Jam , Menit , Detik :" <<endl;
	cout<<detik <<" "<< "detik" <<" "<< "=" <<" "<< jam << " " << "jam" << " " << menit << " " << "menit" << " " << jumlahkeseluruhandetik << " " << "detik" <<endl;
	
	return 0;
}









