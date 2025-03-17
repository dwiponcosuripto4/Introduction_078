#include <iostream>
using namespace std;

float Panjang, Lebar;

void InputData()
{
    // Meminta input Panjang
    cout << "Masukkan Panjang : ";
    cin >> Panjang;

    // Meminta input Lebar
    cout << "Masukkan Lebar : ";
    cin >> Lebar;
}

float HitungLuas()
{
    // Menghitung luas dan langsung mengembalikannya
    return Panjang * Lebar;
}

void OutputData()
{
    // Menampilkan hasil perhitungan luas
    cout << "Luas Persegi Panjang : " << HitungLuas();
}

int main()
{
    // Menjalankan fungsi untuk input data, menghitung, dan output data
    InputData();
    OutputData();
}
