#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
float nhoNhat(float[], int);

int main()
{
    float a[100];
    int n;
    Nhap(a, n);
    cout << "so nho nhat la: " << nhoNhat(a, n);
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
float nhoNhat(float a[], int n)
{
    float lc = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < lc)
            lc = a[i];
    }
    return lc;
}

