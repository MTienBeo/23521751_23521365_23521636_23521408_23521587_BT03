#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ChanCuoi(int[], int);
int main()
{
    int a[100];
    int n;
    Nhap(a, n);
    Xuat(a, n);
    int kq = ChanCuoi(a, n);
    cout << "so chan cuoi trong mang la: " << kq;
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
int ChanCuoi(int a[], int n)
{
    for (int i = n - 1; i >= 0; i--)
        if (a[i] % 2 == 0)
            return a[i];
    return -1;
}