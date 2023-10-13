#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int viTriDau(float[], int);
float DuongNhoNhat(float[], int);

int main()
{
    float a[100];
    int n;
    Nhap(a, n);
    Xuat(a, n);
    float kq = DuongNhoNhat(a, n);
    if (kq == -1)
        cout << "khong ton tai";
    else
        cout << "vi tri so duong nho nhat la: " << kq;
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
int viTriDau(float a[], int n)
{
    for (int i = 0; i < n; i++)
        if (a[i] > 0)
            return i;
    return -1;
}
float DuongNhoNhat(float a[], int n)
{
    int lc = viTriDau(a, n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0 && a[i] < a[lc])
            lc = i;
    }
        return lc;
}