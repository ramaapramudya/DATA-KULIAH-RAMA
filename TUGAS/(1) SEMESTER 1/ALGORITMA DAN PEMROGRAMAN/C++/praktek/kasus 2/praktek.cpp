#include <iostream>
using namespace std;

int main()
{
    // isi awal array
    char huruf[5] = {'a', 'b', 'c', 'd', 'e'};

    // mengubah isi data array
    huruf[2] = 'r';

    // mencetak isi array
    cout << "Huruf : " << huruf[2] << endl;

    return 0;
}