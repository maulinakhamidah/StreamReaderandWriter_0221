#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    try
    {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw("halo"); //meleparkan sebuah integer maka
        cout << "Pernyataan tidak akan dieksekusi" << endl;
   