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

class RekeningSyariah : public RekeningBank {
public:
    RekeningSyariah(string no, double saldoAwal) : RekeningBank(no, saldoAwal) {}
    void potongAdmin() override {
        cout << "Sedang Memproses Transaksi " << nomorRekening << " (Syariah) -> Bebas biaya admin!." << endl;
    }
};

class RekeningKonvensional : public RekeningBank {
public:
    RekeningKonvensional(string no, double saldoAwal) : RekeningBank(no, saldoAwal) {}
    void potongAdmin() override {
        double admin= 15000;
        saldo -= admin;
        cout << "Rekening Konvensional: Dipotong biaya admin Rp " << admin << endl;
    }
};

int main() {
    RekeningBank* akun;

    RekeningSyariah tabunganku("SYR-001", 500000);
    RekeningKonvensional tabunganBisnis("KNV-099", 2000000);

    akun = &tabunganku;
    akun->potongAdmin();
    akun->tampilkanInfo();

    cout << "-----------------------------" << endl;
    cout << endl;

    akun = &tabunganBisnis;
    akun->potongAdmin();
    akun->tampilkanInfo();

    return 0;
}