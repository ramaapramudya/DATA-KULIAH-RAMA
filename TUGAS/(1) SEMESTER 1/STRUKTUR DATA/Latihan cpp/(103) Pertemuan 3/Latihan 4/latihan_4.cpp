#include <iostream>
#include <cstring>

using namespace std;

struct paket_internet
{
    string nama_paket;
    int kuota_telpon;
    int kuota_internet;
} telkomsel, indosat;

int main()
{
    telkomsel.nama_paket = "Telkomsel";
    telkomsel.kuota_telpon = 50;
    telkomsel.kuota_internet = 30;

    indosat.nama_paket = "Indosat";
    indosat.kuota_telpon = 100;
    indosat.kuota_internet = 50;

    cout << "Nama Paket \t: " << telkomsel.nama_paket << endl;
    cout << "Kuota Telpon \t: " << telkomsel.kuota_telpon << "Menit" << endl;
    cout << "Kuota Internet \t: " << telkomsel.kuota_internet << "GB" << endl;
    cout << "----------  ----------  ----------" << endl;

    cout << "Nama Paket \t: " << indosat.nama_paket << endl;
    cout << "Kuota Telpon \t: " << indosat.kuota_telpon << "Menit" << endl;
    cout << "Kuota Internet \t: " << indosat.kuota_internet << "GB" << endl;

    system("pause");
    return 0;
}