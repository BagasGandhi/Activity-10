#include <iostream>
#include <string>
using namespace std;

//pembuatan class orangtua
class orang {

public:
    //deklarasi member variabel dari class orang
    string nama;

    //pembuatan constructor dan destructor pada class orang
    orang(string pNama) : nama(pNama) {
        cout << "Orang dibuat \n" << endl;
    }

    ~orang() {
        cout << "Orang dihapus \n" << endl;
    }

    //pembuatan function jumlah
    int jumlah(int a, int b) {
        return a + b;
    }

};

//pembuatan class anak sebagai pewaris dari class orang 
class pelajar : public orang {
public:
    string sekolah;

    pelajar(string pNama, string pSekolah) : orang(pNama), sekolah(pSekolah) {
        cout << "Pelajar dibuat \n" << endl;
    }
    ~pelajar() {
        cout << "Pelajar dihapus \n" << endl;
    }
    string perkenalan() {
        return "Hallo, nama saya " + nama + " dari sekolah " + sekolah + "\n\n";
    }
};

int main() {
    pelajar siswa1("andi laksono", "SMAN 1 Bantul");
    cout << siswa1.perkenalan();
    cout << "Hasil = " << siswa1.jumlah(10, 90) << endl;

    return 0;
}