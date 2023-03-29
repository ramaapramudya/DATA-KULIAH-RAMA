2
#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;
// cara buat tampilan tabel di c++ oleh Hendy 79
int main()
{
  int b[1000], c[1000], d[1000], e[1000], n;
  int b2[1000], c2[1000], d2[1000], e2[1000], f2[1000], g2[1000], n2;
  char a[1000][30];
  char a2[1000][30];
  cout << "Input Tabel Kebenaran 1:\n\n";
  cout << "Masukan banyak data yang ingin diinput = ";
  cin >> n;
  cout << endl
       << endl;
  for (int i = 0; i < n; i++)
  {
    cout << "Data ke-" << i + 1 << endl;
    cout << "Masukan Nama\t= ";
    scanf(" %[^\n]s", a[i]);
    cout << "Masukan Nilai 1\t= ";
    cin >> b[i];
    cout << "Masukan Nilai 2\t= ";
    cin >> c[i];
    cout << "Masukan Nilai 3\t= ";
    cin >> d[i];
    cout << "Masukan Nilai 4\t= ";
    cin >> e[i];
  }
  system("CLS");
  cout << "Output:\n\n";
  cout << "=============================================================================\n";
  cout << "|  No  |           Nama           | Nilai 1 | Nilai 2 | Nilai 3 | Nilai 4 |  \n";
  cout << "=============================================================================\n";
  for (int i = 0; i < n; i++)
  {
    cout << "| " << setiosflags(ios::left) << setw(5) << i + 1 << "|";
    cout << " " << setiosflags(ios::left) << setw(25) << a[i] << "|";
    cout << " " << setiosflags(ios::left) << setw(8) << b[i] << "|";
    cout << " " << setiosflags(ios::left) << setw(8) << c[i] << "|";
    cout << " " << setiosflags(ios::left) << setw(8) << d[i] << "|";
    cout << " " << setiosflags(ios::left) << setw(8) << e[i] << "|";
    cout << "\n==========================================================================\n";
  }
  cout << "Input Tabel Kebenaran 2:\n\n";
  cout << "Masukan banyak data yang ingin diinput = ";
  cin >> n2;
  cout << endl
       << endl;
  for (int i = 0; i < n2; i++)
  {
    cout << "Data ke-" << i + 1 << endl;
    cout << "Masukan Nama\t= ";
    scanf(" %[^\n]s", a2[i]);
    cout << "Masukan Nilai 1\t= ";
    cin >> b2[i];
    cout << "Masukan Nilai 2\t= ";
    cin >> c2[i];
    cout << "Masukan Nilai 3\t= ";
    cin >> d2[i];
    cout << "Masukan Nilai 4\t= ";
    cin >> e2[i];
    cout << "Masukan Nilai 5\t= ";
    cin >> f2[i];
    cout << "Masukan Nilai 6\t= ";
    cin >> g2[i];
  }
  system("CLS");
  cout << "Output:\n\n";
  cout << "====================================================================================================\n";
  cout << "|  No  |           Nama           | Nilai 1 | Nilai 2 | Nilai 3 | Nilai 4 | | Nilai 3 | Nilai 4 |   \n";
  cout << "====================================================================================================\n";
  for (int i = 0; i < n2; i++)
  {
    cout << "| " << setiosflags(ios::left) << setw(5) << i + 1 << "|";
    cout << " " << setiosflags(ios::left) << setw(25) << a2[i] << "|";
    cout << " " << setiosflags(ios::left) << setw(8) << b2[i] << "|";
    cout << " " << setiosflags(ios::left) << setw(8) << c2[i] << "|";
    cout << " " << setiosflags(ios::left) << setw(8) << d2[i] << "|";
    cout << " " << setiosflags(ios::left) << setw(8) << e2[i] << "|";
    cout << " " << setiosflags(ios::left) << setw(8) << f2[i] << "|";
    cout << " " << setiosflags(ios::left) << setw(8) << g2[i] << "|";
    cout << "\n=================================================================================================\n";
  }
}