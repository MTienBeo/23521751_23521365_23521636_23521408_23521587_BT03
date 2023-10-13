#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void LeVeCuoi(int[], int);
void ChanVeDau(int[], int);

int main()
{
    int a[500];
    int n;
    cout << "\nNhap so phan tu cua mang a: ";
    Nhap(a, n);
    cout << "\nMang a: ";
    Xuat(a, n);

    LeVeCuoi(a, n);
    ChanVeDau(a, n);
    cout << "\nMang sau khi dua so chia het cho 3 ve dau: ";
    Xuat(a, n);

    return 0;
}

void Nhap(int a[], int& n)
{
    cin >> n;
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void Xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(8) << a[i];
}

void LeVeCuoi(int a[], int n)
{
    int vt = n - 1;
    for (int i = n - 1; i >= 0; i--)
        if (a[i] % 2 != 0)
        {
            int temp = a[i];
            a[i] = a[vt];
            a[vt] = temp;
            vt--;
        }
}

void ChanVeDau(int a[], int n)
{
    int vt = 0;
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0 && a[i] != 0)
        {
            int temp = a[i];
            a[i] = a[vt];
            a[vt] = temp;
            vt++;
        }
}