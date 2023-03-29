#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
  int JumlahTiket, harga, total, ppn, hasil;
  string nama, nm_kelas, nm_maskapai;
  char kelas, kode_pesawat;

  cout << "  RAMA PRAMUDYA WIBISANA (2022320019)" << endl
       << endl;
  cout << ">>>>> PENJUALAN TIKET PESAWAT <<<<<" << endl;
  cout << "===============MASKAPAI============" << endl;
  cout << "      1. GARUDA (G) " << endl;
  cout << "      2. LION (L)   " << endl;
  cout << "================KELAS==============" << endl;
  cout << "      1. KELAS BUSINESS(B) " << endl;
  cout << "      2. KELAS EKONOMI (E) " << endl;
  cout << ">>>>> ======================== <<<<<" << endl;
  cout << endl;

  do
  {
    cout << " NAMA PENUMPANG      : ";
    cin >> nama;
    cout << " KODE PESAWAT[G/L]   : ";
    cin >> kode_pesawat;
    cout << " KELAS PESAWAT[B/E]  : ";
    cin >> kelas;
    cout << " JUMLAH TIKET        : ";
    cin >> JumlahTiket;
    cout << endl;

    switch (kode_pesawat)
    {
    case 'G':
      nm_maskapai = " GARUDA ";
      if (kelas == 'B' || kelas == 'b')
      {
        nm_kelas = "BUSINESS";
        harga = 800000;
        total = harga * JumlahTiket;
        ppn = 0.1 * total;
        hasil = total + ppn;
      }
      else if (kelas == 'E' || kelas == 'e')
      {
        nm_kelas = "EKONOMI";
        harga = 400000;
        total = harga * JumlahTiket;
        ppn = total * 0.1;
        hasil = total + ppn;
      }
      cout << " OUTPUT TIKET " << endl;
      cout << " NAMA PENUMPANG   : " << nama << endl;
      cout << " KODE PESAWAT     : " << nm_maskapai << endl;
      cout << " KELAS PESAWAT    : " << nm_kelas << endl;
      cout << " JUMLAH TIKET     : " << JumlahTiket << endl;
      cout << " TOTAL PEMBAYARAN : " << hasil << endl
           << endl;
      break;
    case 'L':
      nm_maskapai = " LION ";
      if (kelas == 'B' || kelas == 'b')
      {
        nm_kelas = "BUSINESS";
        harga = 900000;
        total = harga * JumlahTiket;
        ppn = 0.1 * total;
        hasil = total + ppn;
      }
      else if (kelas == 'E' || kelas == 'e')
      {
        nm_kelas = "EKONOMI";
        harga = 500000;
        total = harga * JumlahTiket;
        ppn = total * 0.1;
        hasil = total + ppn;
      }
      cout << " OUTPUT TIKET " << endl;
      cout << " NAMA PENUMPANG   : " << nama << endl;
      cout << " KODE PESAWAT     : " << nm_maskapai << endl;
      cout << " KELAS PESAWAT    : " << nm_kelas << endl;
      cout << " JUMLAH TIKET     : " << JumlahTiket << endl;
      cout << " TOTAL PEMBAYARAN : " << hasil << endl
           << endl;
      break;

    default:
      cout << "PILIHAN ANDA SALAH!" << endl;
      break;
    }

  } while (kode_pesawat != 2);
  cout << " Terima Kasih " << endl;

  return 0;
}
