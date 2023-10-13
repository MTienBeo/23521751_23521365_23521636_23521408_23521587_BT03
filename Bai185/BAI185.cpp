#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
bool ktCon(float[], int, int, int);
void DuongDaiNhat(float[], int);

int main()
{
    float a[500];
    int n;

    Nhap(a, n);
    cout << "\nMang ban dau: ";
    Xuat(a, n);
    cout << "\nMang con duong dai nhat: ";
    DuongDaiNhat(a, n);

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

bool ktCon(float a[], int n, int vt, int l)
{
    for (int i = 0; i < l; i++)
        if (a[vt+i] <= 0)
            return false;
    return true;
}

void DuongDaiNhat(float a[],int n)
{
    int lcl = 0;
    int lcvt = 0;
    for (int l = 1; l <= n; l++)
        for (int vt = 0; vt <= n - l; vt++)
        {
            if (ktCon(a, n, vt, l))
                if (l > lcl)
                {
                    lcl = l;
                    lcvt = vt;
                }
        }
    for (int i = 0; i < lcl; i++)
        cout << setw(8) << a[lcvt + i];
}