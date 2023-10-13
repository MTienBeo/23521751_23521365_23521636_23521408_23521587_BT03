#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XoaViTri(float[], int&, int);
void XoaAm(float[], int&);

int main()
{
    float a[500];
    int n;
    cout << "\nNhap so phan tu cua mang a: ";
    Nhap(a, n);
    cout << "\nMang a: ";
    Xuat(a, n);

    XoaAm(a, n);
    cout << "\nMang sau khi xoa tat ca so am: ";
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

void XoaViTri(float a[], int& n, int k)
{
    for (int i = k; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;
}

void XoaAm(float a[], int& n)
{
    for (int i = n - 1; i >= 0; i--)
        if (a[i] < 0)
            XoaViTri(a, n, i);
}