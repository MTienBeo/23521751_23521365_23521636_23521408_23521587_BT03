#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void XoaViTri(int[], int&, int);
void XoaChinhPhuong(int[], int&);
bool ktChinhPhuong(int);

int main()
{
    int a[500];
    int n;
    cout << "\nNhap so phan tu cua mang a: ";
    Nhap(a, n);
    cout << "\nMang a: ";
    Xuat(a, n);

    XoaChinhPhuong(a, n);
    cout << "\nMang sau khi xoa tat ca so chinh phuong: ";
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

void XoaViTri(int a[], int& n, int k)
{
    for (int i = k; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;
}

void XoaChinhPhuong(int a[], int& n)
{
    for (int i = n - 1; i >= 0; i--)
        if (ktChinhPhuong(a[i]))
            XoaViTri(a, n, i);
}

bool ktChinhPhuong(int n)
{
    for (int i = 1; (i * i) <= n; i++)
        if ((i * i) == n)
            return true;
    return false;
}