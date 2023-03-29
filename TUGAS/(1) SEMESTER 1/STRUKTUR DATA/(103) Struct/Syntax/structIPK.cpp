#include <iostream>
#include <iomanip>

using namespace std;

struct IPK
{
    string nama;
    int npm;
    string matkul01, matkul02, matkul03, matkul04, matkul05, matkul06, matkul07;
    double nilai01, nilai02, nilai03, nilai04, nilai05, nilai06, nilai07;
    double ipk;
} fauzi, rama;

int main()
{
    fauzi.nama = "Fauzi Ikhsan Fajar Muzaqi";
    fauzi.npm = 2022320018;
    fauzi.matkul01 = "Struktur Data";
    fauzi.matkul02 = "Pengantar Jaringan Komputer";
    fauzi.matkul03 = "Algoritma dan Pemrograman";
    fauzi.matkul04 = "Pengantar ICT";
    fauzi.matkul05 = "Bahasa Inggris";
    fauzi.matkul06 = "Statistika";
    fauzi.matkul07 = "Logika Informatika";
    fauzi.nilai01 = 4.00;
    fauzi.nilai02 = 4.00;
    fauzi.nilai03 = 4.00;
    fauzi.nilai04 = 4.00;
    fauzi.nilai05 = 4.00;
    fauzi.nilai06 = 4.00;
    fauzi.nilai07 = 4.00;
    fauzi.ipk = 4.00;

    rama.nama = "Rama Pramudya Wibisana";
    rama.npm = 2022320019;
    rama.matkul01 = "Struktur Data";
    rama.matkul02 = "Pengantar Jaringan Komputer";
    rama.matkul03 = "Algoritma dan Pemrograman";
    rama.matkul04 = "Pengantar ICT";
    rama.matkul05 = "Bahasa Inggris";
    rama.matkul06 = "Statistika";
    rama.matkul07 = "Logika Informatika";
    rama.nilai01 = 4.00;
    rama.nilai02 = 4.00;
    rama.nilai03 = 4.00;
    rama.nilai04 = 4.00;
    rama.nilai05 = 4.00;
    rama.nilai06 = 4.00;
    rama.nilai07 = 4.00;
    rama.ipk = 4.00;

    cout << "Nama : " << fauzi.nama << endl;
    cout << "NPM : " << fauzi.npm << endl;
    cout << "Mata Kuliah Yang Ditempuh : " << endl;
    cout << fixed;
    cout << "- " << fauzi.matkul01 << " | IPK = " << setprecision(2) << fauzi.nilai01 << endl;
    cout << "- " << fauzi.matkul02 << " | IPK = " << setprecision(2) << fauzi.nilai02 << endl;
    cout << "- " << fauzi.matkul03 << " | IPK = " << setprecision(2) << fauzi.nilai03 << endl;
    cout << "- " << fauzi.matkul04 << " | IPK = " << setprecision(2) << fauzi.nilai04 << endl;
    cout << "- " << fauzi.matkul05 << " | IPK = " << setprecision(2) << fauzi.nilai05 << endl;
    cout << "- " << fauzi.matkul06 << " | IPK = " << setprecision(2) << fauzi.nilai06 << endl;
    cout << "- " << fauzi.matkul07 << " | IPK = " << setprecision(2) << fauzi.nilai07 << endl;
    cout << "----------" << endl;

    cout << fixed;
    cout << "Maka IPK " << fauzi.nama << " Adalah : " << fauzi.ipk << endl;

    cout << "---------- "
         << "---------- "
         << "---------- " << endl;

    cout << "Nama : " << rama.nama << endl;
    cout << "NPM : " << rama.npm << endl;
    cout << "Mata Kuliah Yang Ditempuh : " << endl;
    cout << fixed;
    cout << "- " << rama.matkul01 << " | IPK = " << setprecision(2) << rama.nilai01 << endl;
    cout << "- " << rama.matkul02 << " | IPK = " << setprecision(2) << rama.nilai02 << endl;
    cout << "- " << rama.matkul03 << " | IPK = " << setprecision(2) << rama.nilai03 << endl;
    cout << "- " << rama.matkul04 << " | IPK = " << setprecision(2) << rama.nilai04 << endl;
    cout << "- " << rama.matkul05 << " | IPK = " << setprecision(2) << rama.nilai05 << endl;
    cout << "- " << rama.matkul06 << " | IPK = " << setprecision(2) << rama.nilai06 << endl;
    cout << "- " << rama.matkul07 << " | IPK = " << setprecision(2) << rama.nilai07 << endl;
    cout << "----------" << endl;

    cout << fixed;
    cout << "Maka IPK " << rama.nama << " Adalah : " << rama.ipk << endl;

    system("pause");
    return 0;
}