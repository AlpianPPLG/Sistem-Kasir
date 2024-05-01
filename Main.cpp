#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	cout << " SISTEM KASIR SEDERHANA C++ " << endl;
	cout << "=============================" << endl;
	cout << endl;
	
	const int MAX_BARANG = 10;
	
	string namaBarang[MAX_BARANG];
	int hargaBarang[MAX_BARANG];
	int jumlahBarang[MAX_BARANG];
	long jumlahTotalBarang;
	long totalHarga = 0;
	long jumlahBayar = 0;
	
	cout << " SELAMAT DATANG DI PROGRAM KASIR SEDERHANA " << endl;
	cout << endl;
	
	cout << "Masukkan Jumlah Barang Yang Ingin Dibeli: ";
	cin >> jumlahTotalBarang;
	cout << endl;
	
	if(jumlahTotalBarang <= 0 || jumlahTotalBarang > MAX_BARANG) {
		cout << "Jumlah Barang Invalid" << endl;
		return 0;
	}
	
	for(int i = 0; i < jumlahTotalBarang; i++) {
		cout << "Barang Ke-" << i+1 << endl;
		getline(cin >> ws,namaBarang[i]);
		cout << "Harga Satuan : ";
		cin >> hargaBarang[i];
		cout << "Jumlah " << "Yang Dibeli: ";
		cin >> jumlahBarang[i];
		cout << endl;
	}
	cout << endl;
	
	cout << "===========================" << endl;
	cout << "         STRUK KASIR   " << endl;
	cout << "==========================" << endl;
	cout << "No  Barang           Jumlah         Harga Satuan     Sub Total" << endl;
	
	for(int i = 0; i < jumlahTotalBarang; i++) {
		cout << setw(1) << i+1 << " ";
		cout << left << setw(12) << namaBarang[i];
		cout << right << setw(5) << jumlahBarang[i];
		cout << setw(18) << hargaBarang[i];
		cout << setw(15) << jumlahBarang[i]*hargaBarang[i];
		cout << endl;
		totalHarga = totalHarga + (jumlahBarang[i]*hargaBarang[i]);
	}
	
	cout << "----------------------" << endl;
	
	cout << "Total Harga: " << totalHarga << endl << endl;
	
	cout << "Jumlah Bayar: Rp. ";
	cin >> jumlahBayar;
	cout << endl;
	
	while(jumlahBayar - totalHarga < 0) {
		cout << "Maaf Uang Anda Kurang, Mohon Lakukan Pembayaran Ulang" << endl;
		cout << "Jumlah Bayar : Rp. ";
		cin >> jumlahBayar;
		cout << endl;
	}
	
	cout << "Kembalian Anda : Rp. " << jumlahBayar - totalHarga << endl;
	cout << endl;
	
	cout << "--------------------------------" << endl;
	cout << "	TERIMA KASIH                   ";
    	
 	return 0;
}
