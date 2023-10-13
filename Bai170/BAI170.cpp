#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void ThemViTri(float[], int&, float, int);
void ThemBaoToan(float[], int&, float);


int main()
{
    float a[500];
    int n;

    float x;
    cout << "\nNhap x: ";
    cin >> x;

    Nhap(a, n);
    cout << "\nMang ban dau: ";
    Xuat(a, n);

    ThemBaoToan(a, n, x);
    cout << "\nMang sau khi them gia tri " << x << " vao mang tang: ";
    Xuat(a, n);

    return 0;
}

void Nhap(float a[], int& n)
{
    cout << "\nNhap so phan tu cua mang: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}

void Xuat(float a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(8) << a[i];
}

void ThemViTri(float a[], int& n, float x, int vt)
{
    n++;
    for (int i = n - 1; i > vt; i--)
        a[i] = a[i - 1];
    a[vt] = x;
}

void ThemBaoToan(float a[], int& n, float x)
{
    for (int i = n - 1; i >= 0; i--)
        if (a[i] < x)
        {
            i++;
            ThemViTri(a, n, x, i);
            return;
        }
}