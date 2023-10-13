#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int DauTien(int[], int n, int, int);
int main()
{
    int a[100];
    int n;
    int x, y;
    cout << "nhap x: ";
    cin >> x;
    cout << "nhap y: ";
    cin >> y;
    Nhap(a, n);
    Xuat(a, n);
    int kq = DauTien(a, n, x, y);
    if (kq == -1)
        cout << x;
    else
        cout <<"so dau tien trong khoang la: "<<kq;
}

void Nhap(int a[], int& n)
{
    cout << "nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "]: ";
        cin >> setw(8) >> a[i];
    }
}
void Xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(8) << a[i];
    cout << endl;
}
int DauTien(int a[], int n, int x, int y)
{
    for (int i = 0; i < n; i++)
        if (a[i] > x && a[i] < y)
            return a[i];
    return -1;
}
