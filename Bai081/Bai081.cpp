#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float DuongDau(float[], int);

int main()
{
    float a[100];
    int n;
    Nhap(a, n);
    Xuat(a, n);
    float kq = DuongDau(a, n);
    if (kq == -1)
        cout << "khong ton tai";
    else
        cout << "so dau tien lon hon 2023 la: " << kq;
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
float DuongDau(float a[], int n)
{
    for (int i = 1; i < n; i++)
        if (a[i] > 2023)
            return a[i];
    return -1;
}