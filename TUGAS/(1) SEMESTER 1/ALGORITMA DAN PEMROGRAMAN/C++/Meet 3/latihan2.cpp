#include <iostream>

using namespace std;

int main()
{
    char char1, char2, char3;

    cout << "Input 3 random characters" << endl;
    cout << "-------------------------" << endl;

    cout << endl;

    cout << "Character 1" << endl;

    cin >> char1;

    cout << "Character 2" << endl;
    cin >> char2;

    cout << "Character 3" << endl;
    cin >> char3;

    cout << endl;

    cout << "The character that inputed is : " << endl;
    cout << char1;
    cout << ", ";
    cout << char2;
    cout << ", and ";
    cout << char3 << endl;

    system("pause");
    return 0;
}