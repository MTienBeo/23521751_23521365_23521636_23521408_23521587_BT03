#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int TongCon(int[], int, int, int);
void TimCon(int[], int,int);

int main()
{
    int a[500];
    int n;

    int M;
    cout << "Nhap M: ";
    cin >> M;

    Nhap(a, n);
    cout << "\nMang ban dau: ";
    Xuat(a, n);
    cout << "\nMang co tong bang "<<M<<" : ";
    TimCon(a, n, M);

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

int TongCon(int a[], int n, int vt, int l)
{
    int S = 0;
    for (int i = vt; i < vt + l; i++)
        S += a[i];
    return S;
}

void TimCon(int a[], int n ,int M)
{
    for (int l = 1; l <= n; l++)
        for (int vt = 0; vt <= n - l; vt++)
            if (TongCon(a, n, vt, l) == M)
            {
                for (int i = 0; i < l; i++)
                    cout << setw(8) << a[vt + i];
                return;
            }
}