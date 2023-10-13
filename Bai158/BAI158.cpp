#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void DichTrai(float[], int);

int main()
{
    float a[500];
    int n;
    cout << "\nNhap so phan tu cua mang a: ";
    Nhap(a, n);
    cout << "\nMang a: ";
    Xuat(a, n);

    DichTrai(a, n);
    cout << "\nMang sau khi dich trai: ";
    Xuat(a, n);

    return 0;
}

void Nhap(float a[], int& n)
{
    cin >> n;
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void Xuat(float a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(8) << a[i];
}

void DichTrai(float a[], int n)
{
    float temp = a[0];
    for (int i = 1; i < n; i++)
        a[i-1] = a[i];
    a[n - 1] = temp;
}