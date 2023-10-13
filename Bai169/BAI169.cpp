#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void ThemViTri(float[], int&, float, int);


int main()
{
    float a[500];
    int n;

    float x;
    int k;
    cout << "\nNhap x: ";
    cin >> x;
    cout << "Nhap k: ";
    cin >> k;

    Nhap(a, n);
    cout << "\nMang ban dau: ";
    Xuat(a, n);

    ThemViTri(a, n, x, k);
    cout << "\nMang sau khi them gia tri " << x << " vao vi tri " << k << ": ";
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
        a[i] = a[i-1];
    a[vt] = x;
}

