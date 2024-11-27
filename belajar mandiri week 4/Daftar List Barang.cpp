#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> daftarBelanja;
    string barang;
    int pilihan;

    do {
        cout << "\n=== Daftar Belanja ===\n";
        cout << "1. Tambahkan Barang\n";
        cout << "2. Lihat Daftar Belanja\n";
        cout << "3. Keluar\n";
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan nama barang: ";
                cin >> barang;
                daftarBelanja.push_back(barang);
                break;
            case 2:
                cout << "Daftar Belanja:\n";
                for (int i = 0; i < daftarBelanja.size(); i++) {
                    cout << i + 1 << ". " << daftarBelanja[i] << endl;
                }
                break;
            case 3:
                cout << "Terima kasih telah menggunakan program ini.\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 3);

    return 0;
}
