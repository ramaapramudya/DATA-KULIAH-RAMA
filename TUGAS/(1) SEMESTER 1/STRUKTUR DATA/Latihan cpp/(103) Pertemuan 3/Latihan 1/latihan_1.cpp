#include <iostream>

using namespace std;

struct mahasiswa
{
    string nama;
    string jurusan;
    float ipk;
};

int main()
{
    struct mahasiswa mhs;

    mhs.nama = "Rama Pramudya Wibisana";
    mhs.jurusan = "Sistem Informasi";
    mhs.ipk = 3.5;

    cout << "DATA MAHASISWA" << endl;
    cout << "--------------------" << endl;
    cout << "Nama           : " << mhs.nama << endl;
    cout << "Program Studi  : " << mhs.jurusan << endl;
    cout << "IPK            : " << mhs.ipk << endl;

    system("pause");
    return 0;
}