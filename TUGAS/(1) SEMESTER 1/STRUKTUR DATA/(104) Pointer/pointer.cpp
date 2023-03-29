#include <iostream>
#include <iomanip>
using namespace std;

struct Fauzi
{
    string name;
    string bdpkrjn;
    string namatmpt;

    double gaji;
};

int main()
{
    Fauzi *fauzi, rama;

    fauzi = &rama;
    cout << "Nama: ";
    cin >> (*fauzi).name;
    cout << "Tempat Kerja: ";
    cin >> (*fauzi).namatmpt;
    cout << "Bidang Pekerjaan: ";
    cin >> (*fauzi).bdpkrjn;
    cout << "Enter Gaji: ";
    cin >> (*fauzi).gaji;
    cout << fixed;
    cout << "Menampilkan hasil input : " << endl;
    cout << "__________________________" << endl;
    cout << (*fauzi).name << " bekerja di " << (*fauzi).namatmpt << endl;
    cout << "Dan saat ini posisi " << (*fauzi).name << " di kantor adalah " << (*fauzi).bdpkrjn << endl;
    cout << "Dia memiliki gaji sebesar Rp." << setprecision(8) << (*fauzi).gaji << endl;

    system("pause");
    return 0;
}