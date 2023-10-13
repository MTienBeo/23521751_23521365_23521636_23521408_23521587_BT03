#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
int demGiaTri(float[], int);

int main()
{
    float a[100];
    int n;
    Nhap(a, n);
    cout << "so luong la: " << demGiaTri(a, n);
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
int demGiaTri(float a[], int n)
{
    if (n <= 1)
        return 0;
    int dem = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] * a[i - 1] > 0 && abs(a[i]) > abs(a[i - 1]))
            dem++;
    }
    return dem;
}