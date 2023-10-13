#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float CuoiCung(float[], int);

int main()
{
    float a[100];
    int n;
    Nhap(a, n);
    Xuat(a, n);
    float kq = CuoiCung(a, n);
    if (kq == 0)
        cout << "khong ton tai";
    else
        cout << "so cuoi cung lon hon -1 la: " << kq;
    return 0;
}

void Nhap(float a[], int& n)
{
    cout << "nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "]: ";
        cin >> setw(8) >> a[i];
    }
}
void Xuat(float a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(8) << a[i];
    cout << endl;
}
float CuoiCung(float a[], int n)
{
    for (int i = n-1; i>0; i--)
        if (a[i] > -1)
            return a[i];
    return 0;
}