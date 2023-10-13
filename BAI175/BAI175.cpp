#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int); 
void XuatCon(int[], int, int, int);
void XuatCon(int[], int, int);
void XuatCon(int[], int);

int main()
{
    int a[500];
    int n;

    Nhap(a, n);
    cout << "\nMang ban dau: ";
    Xuat(a, n);
    cout << "\nTat ca mang con: ";
    XuatCon(a, n);

    return 0;
}

void Nhap(int a[], int& n)
{
    cout << "\nNhap so phan tu cua mang: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}

void Xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(8) << a[i];
}

void XuatCon(int a[], int n, int vt, int l)
{
    for (int i = 0; i < l; i++)
        cout << setw(8) << a[vt + i];
}

void XuatCon(int a[], int n, int l)
{
    for (int vt = 0; vt <= n - l; vt++)
    {
        cout << endl;
        XuatCon(a, n, vt, l);
    }
}

void XuatCon(int a[], int n)
{
    for (int l = 1; l <= n; l++)
        XuatCon(a, n, l);
}