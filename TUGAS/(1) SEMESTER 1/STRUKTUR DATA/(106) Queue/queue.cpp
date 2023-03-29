#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define MAX 75

using namespace std;

int num[MAX];
int head = -1;
int tail = -1;

bool IsEmpty()
{
    if (tail == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool IsFull()
{
    if (tail == MAX - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void MasukkanNilai(int no)
{
    if (IsEmpty())
    {
        head = tail = 0;
    }
    else
    {
        tail++;
    }
    num[tail] = no;
}

void Exit()
{
    if (IsEmpty())
    {
        cout << "Antrian Kosong ! ";
        getch();
    }
    else
    {
        for (int a = head; a < tail; a++)
        {
            num[a] = num[a + 1];
        }
        tail--;
        if (tail == -1)
        {
            head = -1;
        }
    }
}

void Clear()
{
    head = tail = -1;
}

void View()
{
    if (IsEmpty())
    {
        cout << "Antrian Kosong ! ";
    }
    else
    {
        system("cls");
        for (int a = head; a <= tail; a++)
        {
            cout << "=============================="
                 << "\n >> Nomor Antrian : [" << num[a] << "]"
                 << "\n==============================" << endl;
        }
    }
}

int main()
{
    int pilih, p = 1, urut;
    do
    {
        system("cls");
        cout << "UJIAN AKHIR SEMESTER\n"
             << "NAMA : Rama Pramudya Wibisana\n"
             << "NPM : 2022320019\n"
             << "\n\n========= ANTRIAN PAJAK =========\n"
             << "\n================================="
             << "\n| 1. Tambah Antrian             |"
             << "\n| 2. Panggil Antrian            |"
             << "\n| 3. Daftar Antrian             |"
             << "\n| 4. Bersihkan Antrian          |"
             << "\n| 5. Keluar                     |"
             << "\n=================================";
        cout << "\nPilih : ";
        cin >> pilih;
        cout << "\n\n";

        if (pilih == 1)
        {
            if (IsFull())
            {
                cout << "Antrian sudah penuh, mohon tunggu beberapa saat lagi ";
            }
            else
            {
                urut = p;
                MasukkanNilai(urut);
                cout << "---------------------------------" << endl;
                cout << "|         NOMOR ANTRIAN         |" << endl;
                cout << "|               " << p << "               |" << endl;
                cout << "---------------------------------" << endl;
                cout << "|       Silahkan Mengantri      |" << endl;
                cout << "|       Menunggu " << tail << " Antrian      |" << endl;
                cout << "---------------------------------" << endl;
                p++;
            }
        }
        else if (pilih == 2)
        {
            cout << "=================================" << endl;
            cout << " Nomor Antrian : [" << num[head] << "]";
            cout << "\n=================================" << endl;
            Exit();
        }
        else if (pilih == 3)
        {
            View();
        }
        else if (pilih == 4)
        {
            if (IsEmpty())
            {
                cout << "Antrian Kosong ! ";
            }
            else
            {
                Clear();
                cout << "Antrian telah dibersihkan ! ";
            }
        }
        else if (pilih == 5)
        {
        }
        else
        {
            cout << "Masukan anda salah ! \n"
                 << endl;
        }
        getch();
    } while (pilih != 5);
}