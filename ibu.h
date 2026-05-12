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

};