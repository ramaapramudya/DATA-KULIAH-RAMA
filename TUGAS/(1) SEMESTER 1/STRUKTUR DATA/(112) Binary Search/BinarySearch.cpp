#include <iostream>
using namespace std;

int BinarySearch(int array[], int x, int awal, int akhir) 
{
    while (awal <= akhir) 
    {
        int tengah = (akhir + awal) / 2;

        if (array[tengah] == x) 
        return tengah;
        else if (array[tengah] < x) 
        {
            awal = tengah + 1;
        }
        else if (array[tengah] > x)
        {
            akhir = tengah - 1;
        }
    } 
    return -1;
}

int main(void) 
{
    int array[] = {10, 12, 14, 16, 18, 20, 22, 24, 26};
    int x = 20;
    int n = sizeof(array) / sizeof(array[0]);
    int result = BinarySearch(array, x, 0, n - 1);
    
    if (result == -1)
    printf("Nilai tidak ditemukan\n");
    else
    printf("Nilai ditemukan pada index %d\n", result);
}