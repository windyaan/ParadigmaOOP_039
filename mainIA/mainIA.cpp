#include <iostream>
#include <vector>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main() {
    ibu* varIbu = new ibu("dini");
    anak* varAnak = new anak("tono");
    anak* varAnak2 = new anak("rini");

    varIbu->tambahAnak(varAnak);
    varIbu->tambahAnak(varAnak2);

    varIbu->cetakAnak();

    delete varIbu;
    delete varAnak;
    delete varAnak2;

    return 0;
}