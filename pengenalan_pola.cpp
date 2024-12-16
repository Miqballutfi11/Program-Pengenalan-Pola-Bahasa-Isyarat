#include <iostream>
#include <vector>
using namespace std;

string detectGesture(const vector<int>& data) {
    // Contoh pola gerakan
    if (data == vector<int>{10, 20, 10, 20, 10}) return "Halo";
    if (data == vector<int>{50, 50, 50, 50, 50}) return "Selamat Pagi";
    if (data == vector<int>{30, 40, 30, 40, 30}) return "Terima Kasih";
    return "Gerakan Tidak Dikenali";
}

int main() {
    vector<int> sensorData(5);
    cout << "Masukkan data sensor untuk 5 jari:\n";

    for (int i = 0; i < 5; ++i) {
        cout << "Jari " << i + 1 << ": ";
        cin >> sensorData[i];
    }

    string hasil = detectGesture(sensorData);
    cout << "\nHasil Pengenalan Gerakan: " << hasil << "\n";
    return 0;
}
