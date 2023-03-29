#include <iostream>

using namespace std;

int main()
{
    cout << "Increment" << endl;
    for (int MD = 1; MD < 9; MD++)
    {
        cout << MD << endl;
    }

    cout << "Decrement" << endl;
    for (int MD = 8; MD > 0; MD--)
    {
        cout << MD << ". Belajar C++ di Universitas Bina Insani" << endl;
    }

    int MD;
    MD = -5;

    cout << "While" << endl;
    while (MD < 8)
    {
        cout << " . Belajar C++ di Universitas Bina Insani" << endl;
        MD++;
    }

    system("pause");
    return 0;
}