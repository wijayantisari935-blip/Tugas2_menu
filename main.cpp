#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Daftar Harga Menu
    const long harga_soto = 15000;
    const long harga_rawon = 20000;

    int jml_soto = 0;
    int jml_rawon = 0;

    cout << "====================================\n";
    cout << "        APLIKASI MINI KASIR         \n";
    cout << "====================================\n";
    cout << "1. Soto  : Rp " << harga_soto << "\n";
    cout << "2. Rawon : Rp " << harga_rawon << "\n";
    cout << "====================================\n";

    // Input jumlah pesanan
    cout << "Masukkan jumlah porsi Soto  : ";
    cin >> jml_soto;
    cout << "Masukkan jumlah porsi Rawon : ";
    cin >> jml_rawon;

    // Hitung Total
    long total_soto = jml_soto * harga_soto;
    long total_rawon = jml_rawon * harga_rawon;
    long total_bayar = total_soto + total_rawon;

    cout << "\n====================================\n";
    cout << "          Rincian Pembayaran         \n";
    cout << "====================================\n";
    if (jml_soto > 0) {
        cout << "Soto  x" << jml_soto << " : Rp " << total_soto << "\n";
    }
    if (jml_rawon > 0) {
        cout << "Rawon x" << jml_rawon << " : Rp " << total_rawon << "\n";
    }
    cout << "------------------------------------\n";
    cout << "TOTAL BAYAR   : Rp " << total_bayar << "\n";
    cout << "====================================\n";

    // Menahan layar console di Windows agar tidak langsung exit saat berupa .exe
    cout << "\nTekan Enter untuk keluar...";
    cin.ignore();
    cin.get();

    return 0;
}
