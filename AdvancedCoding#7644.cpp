#include <iostream>
using namespace std;
int main()
{
    long long n, hasil = 0;
    cout << "Masukkan panjang data : ";
    cin >> n;

    long long dua = 2;      // pola
    long long sepuluh = 10; // kelipatan
    for (int i = n; i > 0; i--)
    {
        if (i != n)
        {
            hasil += i * dua * sepuluh;
            sepuluh *= 10;
        }
        else
            hasil = dua * i;
        // cout << hasil << " " << sepuluh << endl;
    }
    cout << hasil;
    return 0;
}