#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XoaViTri(float[], int&, int);

int main()
{
    float a[500];
    int n;
    cout << "\nNhap so phan tu cua mang a: ";
    Nhap(a, n);
    cout << "\nMang a: ";
    Xuat(a, n);
    
    int k;
    cout << "\nNhap k: ";
    cin >> k;

    XoaViTri(a, n, k);
    cout << "\nMang sau khi xoa phan tu tai vi tri " << k << ": ";
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
        a[i] = a[i+1];
    n--;
}