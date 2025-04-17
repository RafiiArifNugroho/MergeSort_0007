#include <iostream>
using namespace std;

int arr[20], B[]; // Ukuran array maksimum 20
int n;            // Variabel untuk panjang array
void input()
{
    while (true)
    {
        cout << "Masukkan panjang elemen array: ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nMaksimal panjang array adalah 20\n";
        }
    }

    cout << "\n=====================";
    cout << "\nInputkan isi elemen array";
    cout << "\n=====================\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Elemen ke-" << i << " : ";
        cin >> arr[i];
    }
}

void mergeSort(int low, int high)
{
    if (low < high)
    { // step 1.a
        return;
    }

    int mid = (low + high) / 2; // step 2
    // step 3
    mergeSort(low, mid);      // step3.a
    mergeSort(mid + 1, high); // step 3.b
    // step 4
    int i = low;     // step 4.a
    int j = mid + 1; // step 4.b
    int k = low;     // step 4.c

    while (i <= mid && j <= high)
    { // step 4.d
        if (arr[i] <= arr[j])
        { // step 4.d.i
            B[k] = arr[i];
            i++;
        }
        else
        { // step 4.d.ii
            B[k] = arr[j];
            j++;
        }
