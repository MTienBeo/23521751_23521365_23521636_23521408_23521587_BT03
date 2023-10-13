#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int TongCon(float[], int, int, int);
void TongConMax(float[], int);

int main()
{
    float a[500];
    int n;

    Nhap(a, n);
    cout << "\nMang ban dau: ";
    Xuat(a, n);
    cout << "\nMang con duong co tong lon nhat: ";
    TongConMax(a, n);

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


int TongCon(float a[], int n, int vt, int l)
{
    int S = 0;
    for (int i = vt; i < vt + l; i++)
        S += a[i];
    return S;
}


void TongConMax(float a[], int n)
{
    float lc = TongCon(a, n, 1, 1);
    int lcl = 0;
    int lcvt = 0;
    for (int l = 1; l <= n; l++)
        for (int vt = 0; vt <= n - l; vt++)
                if (TongCon(a, n, vt, l) > lc)
                {
                    lc = TongCon(a, n, vt, l);
                    lcl = l;
                    lcvt = vt;
                }
    for (int i = 0; i < lcl; i++)
        cout << setw(8) << a[lcvt + i];
}