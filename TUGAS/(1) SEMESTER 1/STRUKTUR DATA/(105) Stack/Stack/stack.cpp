#include <iostream>
#include <conio.h>
#define maxstack 4
using namespace std;

struct STACK
{
    int top;
    string data[4];
};
string data;

struct STACK newstack;

bool isfull()
{
    if (newstack.top == maxstack)
        return true;
    else
        return false;
}

bool isempty()
{
    if (newstack.top == -1)
        return true;
    else
        return false;
}

void push(string data)
{
    if (isfull() == true)
    {
        puts("\nKeranjang belanja sudah penuh!\n");
        system("pause");
    }
    else
    {
        newstack.top++;
        newstack.data[newstack.top] = data;
    }
}

void pop()
{
    if (isempty() == true)
    {
        cout << "\nKeranjang belanja kosong!\n";
    }
    else
    {
        cout << "\nBarang yang dibatalkan : " << newstack.data[newstack.top] << endl;
        newstack.top--;
    }
}

void print()
{
    printf("\nBarang yang anda masukkan ke keranjang : \n");
    printf("===============================================\n");
    for (int x = 0; x <= newstack.top; x++)
    {
        cout << newstack.data[x] << "  |  ";
    }
}

void clear()
{
    newstack.top = -1;
    printf("\nKeranjang belanja kosong!\n");
}

int main()
{
    newstack.top = -1;

    char menu;
    char kembali;

    do
    {
        system("cls");
        printf("\t     E-COMMERCE\n");
        printf("\t=====================\n\n");
        printf("Menu : \n");
        puts("1. Barang yang akan dibeli");
        puts("2. Keranjang");
        puts("3. Batalkan barang yang akan dibeli");
        puts("4. Bersihkan keranjang");
        puts("5. Check Out");
        puts("6. Exit");

        cout << "\nPilih Menu : ";
        cin >> menu;

        if (menu == '1')
        {
            cout << "\nMasukan barang : ";
            cin >> data;
            push(data);
            kembali = 'y';
        }
        else if (menu == '2')
        {
            if (isempty() == false)
            {
                print();
                cout << "\n\nKembali? (y/t) ";
                cin >> kembali;
            }
            else
            {
                clear();
                cout << "\n\nKembali? (y/t) ";
                cin >> kembali;
            }
        }
        else if (menu == '3')
        {
            pop();
            kembali = 'y';
            getch();
        }
        else if (menu == '4')
        {
            clear();
            cout << "\n\nKembali? (y/t) ";
            cin >> kembali;
        }
        else if (menu == '5')
        {
            if (isempty() == false)
            {
                cout << "Barang berhasil di-check out\n";
                clear();
                cout << "\n\nKembali? (y/t) ";
                cin >> kembali;
            }
            else
            {
                cout << "Tidak ada barang di keranjang\n";
                cout << "\n\nKembali? (y/t) ";
                cin >> kembali;
            }
        }
        else if (menu == '6')
        {
            exit(0);
        }
    } while (kembali == 'Y' || kembali == 'y');
}