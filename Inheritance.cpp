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

};