#include <iostream>
using namespace std;
int main()
{
    double tagihan, tip, nilaiAkhir;
    cout << "Masukkan nilai tagihan : ";
    cin >> tagihan;
    tip = ((tagihan >= 50 && tagihan <= 300) ? tagihan * 0.15 : tagihan * 0.2);
    nilaiAkhir = tagihan + tip;
    cout << "Nilai akhir : " << nilaiAkhir;
    return 0;
}