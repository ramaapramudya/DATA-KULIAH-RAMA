#include <iostream>

using namespace std;

int main()
{
    int luasalas, tinggi;
    int sisi1, sisi2, alassisitegak, tinggisisitegak;
    float volume, luassisitegak, luaspermukaan, la;

    // penjelasan
    cout << "Perhitungan Volume dan Luas Permukaan Limas Segi Empat by Fauzi Ikhsan & Rama Pramudya" << endl;

    cout << "Luas Alas Limas = ";
    cin >> luasalas;
    cout << "Tinggi Limas = ";
    cin >> tinggi;
    cout << "Sisi 1 Limas = ";
    cin >> sisi1;
    cout << "Sisi 2 Limas = ";
    cin >> sisi2;
    cout << "Alas Sisi Tegak = ";
    cin >> alassisitegak;
    cout << "Tinggi Sisi Tegak = ";
    cin >> tinggisisitegak;

    // proses (rumus)(output)
    // Mencari volume
    la = (sisi1 * sisi2);
    volume = (luasalas * tinggi * 1 / 3);

    // Mencari Luas Permukaan
    luassisitegak = (0.5 * alassisitegak * tinggisisitegak);
    luaspermukaan = (la + luassisitegak * 4);

    cout << "--------------Hasilnya Sebagai Berikut--------------" << endl;
    // output
    cout << "Luas Alas = " << la << endl;

    cout << "Untuk Mencari Volume, rumusnya adalah = Luas Alas x Tinggi x 1/3" << endl;
    cout << "Maka didapat" << endl;

    cout << "Volume Limas Segi Empat = " << volume << endl;

    cout << "Untuk mencari Luas Permukaan = Luas Alas x Luas sisi Tegak x 4 (Karena sisi nya ada 4)" << endl;
    cout << "Maka didapat" << endl;

    cout << "Luas Sisi Tegak = " << luassisitegak << endl;

    cout << "Luas Permukaan Segi Empat = " << luaspermukaan << endl;
    system("pause");
    return 0;
}