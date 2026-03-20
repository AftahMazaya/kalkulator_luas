#include <iostream>
#include <cstdlib> 

using namespace std;

int main() {
    int pilihan;
    float sisi, panjang, lebar, alas, tinggi, r, sisiA, sisiB, luas;
    const float PI = 3.14159;
    char ulangi;

    do {
        system("cls"); 

        cout << "==========================================\n";
        cout << "    PROGRAM ALL-IN-ONE KALKULATOR LUAS\n";
        cout << "==========================================\n";
        cout << " [1] Luas Persegi\n";
        cout << " [2] Luas Persegi Panjang\n";
        cout << " [3] Luas Segitiga\n";
        cout << " [4] Luas Lingkaran\n";
        cout << " [5] Luas Trapesium\n";
        cout << " [6] Luas Jajar Genjang\n";
        cout << " [7] Credits / About Developer\n";
        cout << " [0] Keluar Program\n";
        cout << "==========================================\n";
        cout << "Pilih menu (0-7): ";
        cin >> pilihan;

        if (pilihan == 0) {
            break; 
        }

        cout << "------------------------------------------\n";

        switch (pilihan) {
            case 1:
                cout << "[ Menghitung Luas Persegi ]\n";
                cout << "Masukkan panjang sisi: ";
                cin >> sisi;
                luas = sisi * sisi;
                cout << "-> Hasil: Luas Persegi adalah " << luas << "\n";
                break;
            case 2:
                cout << "[ Menghitung Luas Persegi Panjang ]\n";
                cout << "Masukkan panjang: ";
                cin >> panjang;
                cout << "Masukkan lebar: ";
                cin >> lebar;
                luas = panjang * lebar;
                cout << "-> Hasil: Luas Persegi Panjang adalah " << luas << "\n";
                break;
            case 3:
                cout << "[ Menghitung Luas Segitiga ]\n";
                cout << "Masukkan panjang alas: ";
                cin >> alas;
                cout << "Masukkan tinggi: ";
                cin >> tinggi;
                luas = 0.5 * alas * tinggi;
                cout << "-> Hasil: Luas Segitiga adalah " << luas << "\n";
                break;
            case 4:
                cout << "[ Menghitung Luas Lingkaran ]\n";
                cout << "Masukkan jari-jari (r): ";
                cin >> r;
                luas = PI * r * r;
                cout << "-> Hasil: Luas Lingkaran adalah " << luas << "\n";
                break;
            case 5:
                cout << "[ Menghitung Luas Trapesium ]\n";
                cout << "Masukkan sisi sejajar atas (a): ";
                cin >> sisiA;
                cout << "Masukkan sisi sejajar bawah (b): ";
                cin >> sisiB;
                cout << "Masukkan tinggi: ";
                cin >> tinggi;
                luas = 0.5 * (sisiA + sisiB) * tinggi;
                cout << "-> Hasil: Luas Trapesium adalah " << luas << "\n";
                break;
            case 6:
                cout << "[ Menghitung Luas Jajar Genjang ]\n";
                cout << "Masukkan panjang alas: ";
                cin >> alas;
                cout << "Masukkan tinggi: ";
                cin >> tinggi;
                luas = alas * tinggi;
                cout << "-> Hasil: Luas Jajar Genjang adalah " << luas << "\n";
                break;
            case 7:
                cout << "\n==========================================\n";
                cout << "                 CREDITS\n";
                cout << "==========================================\n";
                cout << " Developer : Aftah Hafidz Mazaya\n";
                cout << " Kelas     : 10 MIA 2\n";
                cout << " Instansi  : MA IT Baitul Quran Al Jahra Magetan\n";
                cout << "==========================================\n";
                break;
            default:
                cout << "Pilihan tidak valid! Silakan masukkan angka 0-7.\n";
        }

        cout << "------------------------------------------\n";
        cout << "Kembali ke menu utama? (y/t): ";
        cin >> ulangi;

    } while (ulangi == 'y' || ulangi == 'Y');

    system("cls");
    cout << "\n==========================================\n";
    cout << "  Terima kasih sudah menggunakan program ini!\n";
    cout << "==========================================\n\n";
    
    return 0;
}