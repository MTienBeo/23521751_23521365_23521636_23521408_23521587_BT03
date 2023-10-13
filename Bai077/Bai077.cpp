#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float LonNhat(float[], int);
float NhoNhat(float[], int);
void TimDoan(float[], int,float&,float&);


int main()
{
    float a[100];
    int n;
    Nhap(a, n);
    Xuat(a, n);
    float x = LonNhat(a, n);
    float y = NhoNhat(a, n);
    cout << "doan la: " << "[" << y << ";" << x<< "]";
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
}
float LonNhat(float a[], int n)
{
    float lc = a[0];
    for (int i = 0; i < n; i++)
        if (a[i] > lc)
            lc = a[i];
    return lc;
}
float NhoNhat(float a[], int n)
{
    float lc = a[0];
    for (int i = 0; i < n; i++)
        if (a[i] < lc)
            lc = a[i];
    return lc;
}
void TimDoan(float a[], int n, float& x, float& y)
{
}
