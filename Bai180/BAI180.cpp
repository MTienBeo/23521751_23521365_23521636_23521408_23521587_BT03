#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktCon(int[], int, int, int);
int DemCon(int[], int);

int main()
{
    int a[500];
    int n;

    Nhap(a, n);
    cout << "\nMang ban dau: ";
    Xuat(a, n);
    cout << "\nSo luong mang tang lon hon 1 phan tu: " << DemCon(a, n);

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

bool ktCon(int a[], int n, int vt, int l)
{
    for (int i = vt; i < vt + l - 1; i++)
        if (a[i] > a[i + 1])
            return false;
    return true;
}

int DemCon(int a[], int n)
{
    int dem = 0;
    for (int l = 2; l <= n; l++)
        for (int vt = 0; vt <= n - l; vt++)
            if (ktCon(a, n, vt, l))
                dem++;
    return dem;
}