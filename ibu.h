#ifndef IBU_H
#define IBU_H

#include <iostream>
#include <string>

using namespace std;

class anak;

// membuat class ibu pada file header ibu.h
class ibu {
public:
    // deklarasi member variabel pada class ibu
    string nama;
    vector<anak*> daftar_anak;

    // membuat construktor dan destruktor pada class ibu
    ibu(string pNama) : nama(pNama) {
        cout << "Ibu  \"" << nama << "\" ada \n";
    };

    ~ibu() {
        cout << "ibu \"" << nama << "\" tidak ada \n";
    };

    //deklarasi prosedure tambahAnak() dan cetakAnak()
    void tambahAnak(anak* pAnak);
    void cetakAnak();
};

// pendefinisian prosedure - prosedure pada class ibu diluar class
void ibu::tambahAnak(anak* pAnak) {
    daftar_anak.push_back(pAnak);
}

void ibu::cetakAnak() {
    cout << "Daftar Anak dari ibu \"" << this-> nama << "\": \n";
    for (auto& a : daftar_anak) 
    {
        cout << " - " << a->nama << "\n";
    }
    cout << endl;
}

#endif