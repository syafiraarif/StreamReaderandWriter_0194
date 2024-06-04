#include <iostream>
#include <exception>
//untuk obyek exception yang akan digunakan
#include <array>
//untuk obyek array yang akan kita digunakan
using namespace std;

int main()
{
    cout << "awal program" << endl; //penanda 1:...
    try
    {
        array<int, 3>data = { 1, 2, 3 };
        //pesan array integer 3 element
        //cout<<data.at(5) << endl
        //memanggil array element ke 5
    }
}

