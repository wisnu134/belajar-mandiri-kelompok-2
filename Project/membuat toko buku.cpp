
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class Buku {
	
private:
	
    char *penulis, *judul, *penerbit;
    float *harga;
    int *stok;
public:
	
    Buku() {
    
        penulis = new char[20];
        judul = new char[20];
        penerbit = new char[20];
        harga = new float;
        stok = new int;
    }
    void inputData();
    void ubahData();
    void tampilkanData();
    int cari(char[], char[]);
    void beliBuku();
};

void Buku::inputData() {
		
    cin.ignore();
    
    cout << "\nMasukkan Nama Penulis: ";
    cin.getline(penulis, 20);
    cout << "Masukkan Judul Buku: ";
    cin.getline(judul, 20);
    cout << "Masukkan Nama Penerbit: ";
    cin.getline(penerbit, 20);
    cout << "Masukkan Harga: ";
    cin >> *harga;
    cout << "Masukkan Stok Buku: ";
    cin >> *stok;
}
void Buku::ubahData() {
    cin.ignore();
    cout << "\nMasukkan Nama Penulis: ";
    cin.getline(penulis, 20);
    cout << "Masukkan Judul Buku: ";
    cin.getline(judul, 20);
    cout << "Masukkan Nama Penerbit: ";
    cin.getline(penerbit, 20);
    cout << "Masukkan Harga: ";
    cin >> *harga;
    cout << "Masukkan Stok Buku: ";
    cin >> *stok;
}
void Buku::tampilkanData() {
    cout << "\nNama Penulis: " << penulis;
    cout << "\nJudul Buku: " << judul;
    cout << "\nPenerbit: " << penerbit;
    cout << "\nHarga: " << *harga;
    cout << "\nStok: " << *stok;
}
int Buku::cari(char cariJudul[20], char cariPenulis[20]) {
    if (strcmp(cariJudul, judul) == 0 && strcmp(cariPenulis, penulis) == 0)
        return 1;
    else
        return 0;
}
void Buku::beliBuku() {
    int jumlah;
    cout << "\nMasukkan Jumlah Buku yang ingin dibeli: ";
    cin >> jumlah;
    if (jumlah <= *stok) {
        *stok = *stok - jumlah;
        cout << "\nPembelian Buku Berhasil";
        cout << "\nTotal Harga: Rp. " << (*harga) * jumlah;
    } else
        cout << "\nStok Buku Tidak Mencukupi";
}
int main() {
	cout << "\n\n\t\t=================================";
    cout << "\n\t\t  SELAMAT DATANG DI TOKO BUKU";
    cout << "\n\t\t           KELOMPOK 2 ";
    cout << "\n\t\t=================================\n";
    Buku *B[20];
    int i = 0, t, pilihan;
    char judulCari[20], penulisCari[20];
    while (1) {
        cout << "\n\n\t\tMENU"
             << "\n1. Masukkan Data Buku Baru"
             << "\n2. Beli Buku"
             << "\n3. Cari Buku"
             << "\n4. Ubah Detail Buku"
             << "\n5. Keluar"
             << "\n\nMasukkan Pilihan Anda: ";
        cin >> pilihan;
        switch (pilihan) {
            case 1:
                B[i] = new Buku;
                B[i]->inputData();
                i++;
                break;
            case 2:
                cin.ignore();
                cout << "\nMasukkan Judul Buku: ";
                cin.getline(judulCari, 20);
                cout << "Masukkan Penulis Buku: ";
                cin.getline(penulisCari, 20);
                for (t = 0; t < i; t++) {
                    if (B[t]->cari(judulCari, penulisCari)) {
                        B[t]->beliBuku();
                        break;
                    }
                }
                if (t == i)
                    cout << "\nBuku Tidak Tersedia";
                break;
            case 3:
                cin.ignore();
                cout << "\nMasukkan Judul Buku: ";
                cin.getline(judulCari, 20);
                cout << "Masukkan Penulis Buku: ";
                cin.getline(penulisCari, 20);
                for (t = 0; t < i; t++) {
                    if (B[t]->cari(judulCari, penulisCari)) {
                        cout << "\nBuku Ditemukan";
                        B[t]->tampilkanData();
                        break;
                    }
                }
                if (t == i)
                    cout << "\nBuku Tidak Tersedia";
                break;
            case 4:
                cin.ignore();
                cout << "\nMasukkan Judul Buku: ";
                cin.getline(judulCari, 20);
                cout << "Masukkan Penulis Buku: ";
                cin.getline(penulisCari, 20);
                for (t = 0; t < i; t++) {
                    if (B[t]->cari(judulCari, penulisCari)) {
                        cout << "\nBuku Ditemukan";
                        B[t]->ubahData();
                        break;
                    }
                }
                if (t == i)
                    cout << "\nBuku Tidak Tersedia";
                break;
            case 5:
                exit(0);
            default:
                cout << "\nPilihan Tidak Valid";
        }
    }
    return 0;
}

