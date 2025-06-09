#include <iostream>
#include <exception>
// untuk obyek exception yanga akan digunakan 
#include <array>
// untuk obyek array yanga akan kita guanakan
using namespace std;

int main()
{
    cout << "Awal Program" << endl; // penanda 1:...
    try
    {
        array<int, 3> data = {10, 20, 30};
        // pesan array integer 3 elemen
        cout << data.at(4) << endl;
        // memanggil array elemen 5
    }
    catch (exception& e)
    {
        // penangkap menggunakan obyek exeception
        cout << e.what() << endl;
        /*akan dieksekusi karena array data hanya memiliki 3 elemen*/
       
 

