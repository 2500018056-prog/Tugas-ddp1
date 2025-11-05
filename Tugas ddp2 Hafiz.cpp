#include <iostream>
using namespace std;

int main() {
	int hari, jam, menit, detik;
	long jumlahkeseluruhanDetik;
	
	cout << "Masukkan bilangan dalam satuan detik: ";
    cin >> jumlahkeseluruhanDetik;
	
    hari  = jumlahkeseluruhanDetik / 86400;
    jam   = (jumlahkeseluruhanDetik % 86400) / 3600;
    menit = (jumlahkeseluruhanDetik % 3600) / 60;
    detik = jumlahkeseluruhanDetik % 60;
	
	cout << endl;
    cout << "Hasil konversi ke Hari Jam Menit Detik:" << endl;
    cout << jumlahkeseluruhanDetik << " detik = ";
    cout << hari  << " hari  ";
    cout << jam   << " jam   ";
    cout << menit << " menit ";
    cout << detik << " detik" << endl;

    return 0;
}



