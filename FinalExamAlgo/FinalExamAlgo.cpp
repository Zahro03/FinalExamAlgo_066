#include <iostream> 
#include <string> 
using namespace std;

class Node {
public:
	const int MAX_MAHASISWA = 100;
	int NIM[11];
	string nama[100];
	int tahunMasuk[4];
	int jumlahMahasiswa = 100;
	Node* next;
};

class CircularLinkedList {
private:
	Node* LAST;

public:
	CircularLinkedList() {
		LAST = NULL;
	}
	void tampilkanSemuaMahasisa();
	bool algorithmacariMahasiswaByNIM();
	bool algorithmaSortByTahunMasuk()
};

if (jumlahMahasiswa < MAX_MAHASISWA) {
	cout << "========== TAMBAH MAHASISWA ==========" << endl; cout << "NIM        : "; cin >> NIM[jumlahMahasiswa]; cin.ignore();
	cout << "Nama 	 : ";
	getline(cin, nama[jumlahMahasiswa]); cout << "Jurusan  : ";
	getline(cin, jurusan[jumlahMahasiswa]); cout << "Tahun Masuk: "; cin >> tahunMasuk[jumlahMahasiswa]; cin.ignore();  jumlahMahasiswa++;
	cout << "Mahasiswa berhasil ditambahkan!" << endl;
}
else {
	cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
}
); //isi disini 
void tampilkanSemuaMahasiswa();
//isi disini 
void algorithmacariMahasiswaByNIM();
//isi disini 
void algorithmaSortByTahunMasuk();

int main() {
	int pilihan; do {

		while (true)
			try {
			cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
			cout << "1. Tambah Mahasiswa" << endl;
			cout << "2. Tampilkan Semua Mahasiswa" << endl;
			cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
			cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
			cout << "5. Keluar" << endl;
			cout << "Pilihan: ";
			char ch;;
			cin >> pilihan;
			cin.ignore();
			switch (pilihan) {
			case 1: {
				obj.tampilkanSemuaMahasiswa();
				break;
			}
			case 2: {
				obj.algoritmacariMahasiswaByNIM();
				break;
			}
			case 3: {
				obj.algoritmaSortByTahunMasuk();
				break;
			}
			case 4: {
				return 0;
			}
			case 5:
				cout << "Terima kasih! Program selesai." << endl;
				break;
			default:
				cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
				cout << endl;
				while (pilihan != 5);
				return 0;
			}
		}

		//2.Circularlinkedlist
		//3.Stack Array adalah struktur data yang mewakili tumpukan(pengumpulan data) 
		//  dengan menggunakan struktur array.Stack adalah jenis tumpukan yang mengikuti aturan LIFO(LAST IN FIRST OUT)
		//	Artinya  elemen terakhir yang dimasukkan ke dalam stack adalah elemen perrtama yang dihapus dari stack.
		//  Sedangkan Queues adalah elemen yang paling ujung akhir yang diinsertkan dan elemen paling ujung awal didelete.
		//	Tujuan Queues yaitu menerima inputan,hanya 1 request yang akan diproses dan request yang akan menjadi prioritas.
		// 4. Algoritma stack biasanya digunakan dalam situasi dimana kita perlu melacak informasi sementara mengaksesnya dalam urutan LIFO.
		// 5. a. ada 5 
		//	  b. BENAR 
