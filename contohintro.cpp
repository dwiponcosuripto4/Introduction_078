#include <iostream>
using namespace std;

// numeric nPanjang, nLebar, nLuas
float Panjang, Lebar, Luas;
void InputData()
{
    // display ""Masukkan Panjang"
    cout << "Masukkan Panjang : ";
    // accept nPanjang
    cin >> Panjang;
    // display ""Masukkan Lebar"
    cout << "Masukkan Lebar : ";
    // accept nLebar
    cin >> Lebar;
    // compute nLuas = nPanjang * nLebar

    // display "Luas Persegi Panjang : " + nLuas

    // end
}

float HitungLuas()
{
    // compute nLuas = nPanjang * nLebar
    return Panjang * Lebar;
}

void OutputData()
{
    // display "Luas Persegi Panjang : " + nLuas
    cout << "Luas Persegi Panjang : " << HitungLuas();
}

int main()
{
    InputData();
    OutputData();
}