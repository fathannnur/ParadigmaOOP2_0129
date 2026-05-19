#include <iostream>
using namespace std;

class RekeningBank {
    protected:
        string nomorRekening;
        double saldo;
public:
    RekeningBank(string no, double saldoAwal) : nomorRekening(no), saldo(saldoAwal) {}

    virtual void potongAdmin() = 0;

    void tampilkanInfo() {
        cout << "No Rek: " << nomorRekening << " | Saldo Akhir: Rp " << saldo << endl;
    }
};