#ifndef IBU_H
#define IBU_H
#include<iostream>
#include<vector>
using namespace std;

class anak;
class ibu {
    public:
        string nama;
        vector<anak*> daftar_anak;

        ibu(string pNama) : nama(pNama){
            cout << "Ibu \"" << nama << "\" ada\n;
        }
}