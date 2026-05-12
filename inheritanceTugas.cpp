#include <iostream>
#include <vector>
#include <string>
using namespace std;

// pembuatan class induk user
class user {
public:
    static int globalId;
    int id;
    string nama;
    string email;

    user(string pNama, string pEmail)
        : nama(pNama), email(pEmail) {
        id = generateId();
    }

    int generateId() {
        return ++globalId;
    }
};

// inisialisasi static variable
int user::globalId = 0;

// pembuatan class member sebagai turunan dari user
class member : public user {
public:
    bool status;

    member(string pNama, string pEmail)
        : user(pNama, pEmail), status(true) {
    }

    void showProfile() {
        cout << "ID     : " << id << endl;
        cout << "Nama   : " << nama << endl;
        cout << "Email  : " << email << endl;
        cout << "Status : " << (status ? "Aktif" : "Tidak Aktif") << endl;
        cout << endl;
    }
};

// pembuatan class admin sebagai turunan dari user
class admin : public user {
public:
    admin(string pNama, string pEmail)
        : user(pNama, pEmail) {
    }

    void showAllMember(vector<member*> daftar_member) {
        cout << "Daftar Semua Member:" << endl;

        for (auto& m : daftar_member) {
            cout << "ID     : " << m->id << endl;
            cout << "Nama   : " << m->nama << endl;
            cout << "Email  : " << m->email << endl;
            cout << "Status : " << (m->status ? "Aktif" : "Tidak Aktif") << endl;
            cout << endl;
        }
    }

    void toggleActivationMember(member* pMember) {
        pMember->status = !pMember->status;

        cout << "Status member \"" << pMember->nama << "\" berhasil diubah menjadi ";
        cout << (pMember->status ? "Aktif" : "Tidak Aktif") << endl << endl;
    }
};

int main() {
    // deklarasi object admin
    admin admin1("Budi", "budi@gmail.com");

    // deklarasi object member
    member* member1 = new member("Andi", "andi@gmail.com");
    member* member2 = new member("Sari", "sari@gmail.com");
    member* member3 = new member("Tono", "tono@gmail.com");

    // membuat vector daftar member
    vector<member*> daftar_member;
    daftar_member.push_back(member1);
    daftar_member.push_back(member2);
    daftar_member.push_back(member3);

    // menampilkan profil member
    member1->showProfile();

    // menampilkan semua member
    admin1.showAllMember(daftar_member);

    // mengubah status member
    admin1.toggleActivationMember(member2);

    // menampilkan ulang semua member
    admin1.showAllMember(daftar_member);

    // menghapus pointer dari memori
    delete member1;
    delete member2;
    delete member3;

    return 0;
}