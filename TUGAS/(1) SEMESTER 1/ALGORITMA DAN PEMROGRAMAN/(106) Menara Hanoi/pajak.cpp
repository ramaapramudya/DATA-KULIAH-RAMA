#include <iostream>  // jelasin
#include <stdlib.h>  // jelasin
#define MAX 10       // jelasin
using namespace std; // jelasin

struct Antrian
{ // Buat struct untuk menampung data antrian masing masing loket
    int tail = -1;
    int head = -1;
    int queue[MAX];
    string name;
};

struct Antrian tpt, konsulPajak, konsulAplikasi, customerService; // Deklarasi Struct Antrian

void insertQueueCounter(Antrian antri, string counterName, int menuId); // Deklarasi nama function
bool isEmptyQueue(int tail);                                            // Deklarasi nama function
void CounterMenu();                                                     // Deklarasi nama function
void callQueueToCounter();                                              // Deklarasi nama function
void updateQueueData(Antrian antri, int idMenu);                        // Deklarasi nama function
void updateQueueAfterCall(Antrian antri, int menuId);                   // Deklarasi nama function

// Void menuHeader untuk menampilkan title pada program
void menuHeader()
{
    cout << "===========================================================" << endl;
    cout << "|               Program Sistem Antrian Pajak              |" << endl;
    cout << "===========================================================";
}

// void menu untuk menampilkan isi menu utama seperti tambah dan panggil antrian serta exit
void MainMenu()
{
    int menuSelected;

    menuHeader();
    cout << "\n| 1. Tambah Antrian                                       |";
    cout << "\n| 2. Panggil Antrian                                      |";
    cout << "\n| 3. Exit                                                 |" << endl;
    cout << "===========================================================" << endl;
    cout << endl;

    cout << "Pilih Angka Menu Yang Akan dipilih : ";
    cin >> menuSelected;

    if (menuSelected == 1)
    {
        system("cls");
        CounterMenu();
    }
    else if (menuSelected == 2)
    {
        system("cls");
        callQueueToCounter();
    }
}

// untuk menampilkan menu pilihan loket
void CounterLists()
{
    menuHeader();
    cout << "\n| 1. TPT                                                  |";
    cout << "\n| 2. Konsultasi Pajak                                     |";
    cout << "\n| 3. Konsultasi Aplikasi                                  |";
    cout << "\n| 4. Customer Service                                     |" << endl;
    cout << "===========================================================";
    cout << endl;
}

// Function getCounterType untuk mengambil data antrian berdasarkan loket
Antrian getCounterType(int counterId)
{
    if (counterId == 1)
    {
        return tpt;
    }
    else if (counterId == 2)
    {
        return konsulPajak;
    }
    else if (counterId == 3)
    {
        return konsulAplikasi;
    }
    else
    {
        return customerService;
    }
}

// untuk menginput sebuah menu loket dan menambahkan antrian dari masing masing loket
void CounterMenu()
{
    int counterId;

    CounterLists();

    cout << "Pilih Angka Loket untuk ambil antrian : ";
    cin >> counterId;

    switch (counterId)
    {
    case 1:
        insertQueueCounter(tpt, "TPT", counterId);
        break;
    case 2:
        insertQueueCounter(konsulPajak, "Konsultasi Pajak", counterId);
        break;
    case 3:
        insertQueueCounter(konsulAplikasi, "Konsultasi Aplikasi", counterId);
        break;
    case 4:
        insertQueueCounter(customerService, "Customer Service", counterId);
        break;
    }
}

// Untuk memasukan no loket pada menu panggil antrian dan lalu menampilkan print antrian yang akan dipanggil
void callQueueToCounter()
{
    int counterId;

    CounterLists();

    cout << "Pilih Angka Loket untuk Panggil antrian : ";
    cin >> counterId;

    Antrian antrianSelected = getCounterType(counterId);

    system("cls");

    cout << "=================================================================================";
    cout << "\n   Panggil Antrian Loket " << antrianSelected.name << " Dengan No Urut : " << antrianSelected.queue[antrianSelected.head] << endl;
    cout << "=================================================================================" << endl;

    updateQueueAfterCall(antrianSelected, counterId);
    MainMenu();
}

// Fungsi ini untuk mengupdate tail dan head setelah pemanggilan antrian masing masing loket
void updateQueueAfterCall(Antrian antri, int menuId)
{
    if (isEmptyQueue(antri.tail))
    {
        cout << "=================================================================================";
        cout << "\n   Antrian Loket " << antri.name << " Sudah Habis" << endl;
        cout << "=================================================================================" << endl;

        cout << endl;
    }
    else
    {
        for (int i = antri.head; i < antri.tail; i++)
        {
            antri.queue[i] = antri.queue[i + 1];
        }

        antri.tail--;

        if (antri.tail == -1)
        {
            antri.head = -1;
        }

        updateQueueData(antri, menuId);
    }
}

// fungsi ini untuk memasukan antrian baru dari masing masing loket
void insertQueueCounter(Antrian antri, string counterName, int menuId)
{
    if (isEmptyQueue(antri.tail))
    {
        antri.head = antri.tail = 0;
        antri.name = counterName;
    }
    else
    {
        antri.tail++;
    }

    int queueNumber = antri.tail + 1;

    antri.queue[antri.tail] = queueNumber;

    updateQueueData(antri, menuId);

    system("cls");

    MainMenu();
}

// untuk memperbarui data struct antrian pada masing masing loket
void updateQueueData(Antrian antri, int idMenu)
{
    if (idMenu == 1)
    {
        tpt = antri;
    }
    else if (idMenu == 2)
    {
        konsulPajak = antri;
    }
    else if (idMenu == 3)
    {
        konsulAplikasi = antri;
    }
    else if (idMenu == 4)
    {
        customerService = antri;
    }
}

// Untuk cek apakah struct loket sudah kosong
bool isEmptyQueue(int tail)
{
    return tail == -1;
}

// pemanggilan utama function main menu
int main()
{
    MainMenu();
}