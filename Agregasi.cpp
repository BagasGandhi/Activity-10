#include <iostream>
#include <vector>
#include <string>
using namespace std;

//penyertaan file header ibu.h dan anak.h
#include "ibu.h"
#include "anak.h"

int main()
{

    //deklarasi dan pemberian nilai variable pointer untuk objek dari class ibu dan anak
    ibu* varIbu = new ibu("rani");
    ibu* varIbu2 = new ibu("sari");
    anak* varAnak1 = new anak("tono");
    anak* varAnak2 = new anak("tiara");
    anak* varAnak3 = new anak("dini");
}