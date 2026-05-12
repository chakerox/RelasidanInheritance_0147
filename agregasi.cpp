#include<iostream>
using namespace std;

#include "anak.h"
#include "ibu.h"

    ibu* varIbu = new ibu("Siti");
    ibu* varIbu2 = new ibu("Sarah");
    anak* varAnak1 = new anak("Budi");
    anak* varAnak2 = new anak("Dewi");
    anak* varAnak3 = new anak("Andi");

    varIbu->tambahkanAnak(varAnak1);
    varIbu->tambahkanAnak(varAnak2);
    varIbu2->tambahkanAnak(varAnak3);
    varIbu2->tambahkanAnak(varAnak1);

    varIbu->cetakAnak();
    varIbu2->cetakAnak();