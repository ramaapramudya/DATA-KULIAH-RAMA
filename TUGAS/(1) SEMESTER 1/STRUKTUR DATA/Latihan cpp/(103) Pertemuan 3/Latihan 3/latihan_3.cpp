#include <iostream>

using namespace std;

struct mahasiswa
{
    string nama;
    string sekolah;
    float uangSaku;
};

int main()
{
    struct mahasiswa mahasiswa;

    cout << "==== Pendaftaran Mahasiswa Baru BINA INSANI UNIVERSITY ====" << endl;
    cout << "Nama \t \t: ";
    getline(cin, mahasiswa.nama);

    cout << "Asal Sekolah \t: ";
    getline(cin, mahasiswa.sekolah);

    cout << "Uang Saku \t: ";
    cin >> mahasiswa.uangSaku;

    cout << endl;

    cout << mahasiswa.nama << " bersekolah di " << mahasiswa.sekolah;
    cout << " dengan uang saku " << mahasiswa.uangSaku << " per hari" << endl;

    system("pause");
    return 0;
}