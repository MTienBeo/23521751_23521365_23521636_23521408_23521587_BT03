#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int); 
void XuatCon(int[], int, int, int);

int main()
{
    int a[500];
    int n;

    int l;
    cout << "\nNhap do dai mang con: ";
    cin >> l;

    int vt;
    cout << "\nNhap vi tri phan tu dau cua mang con: ";
    cin >> vt;

    Nhap(a, n);
    cout << "\nMang ban dau: ";
    Xuat(a, n);
    cout << "\nMang con: ";
    XuatCon(a, n, vt, l);

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