#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char operation;
    
    cout << "Masukkan angka pertama: ";
    cin >> num1;
    cout << "Masukkan angka kedua: ";
    cin >> num2;
    
    cout << "Pilih operasi (+, -, *, /): ";
    cin >> operation;
    
    switch (operation) {
        case '+':
            cout << "Hasil: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Hasil: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Hasil: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Hasil: " << num1 / num2 << endl;
            else
                cout << "Error: Pembagian dengan nol tidak diperbolehkan." << endl;
            break;
        default:
            cout << "Operasi tidak valid." << endl;
    }
    
    return 0;
}

