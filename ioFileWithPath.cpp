#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;
    string NamaFile;

    cout << " Masukan Nama file : ";
    cin >> NamaFile;

    // membuka file dalam mode menulis
    ofstream outfile;
    // menujuk ke sebuauh nama file
    outfile.open(NamaFile + ".txt", ios::out);

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    