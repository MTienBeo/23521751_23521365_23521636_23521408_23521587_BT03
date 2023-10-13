#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
float xaNhat(float[], int,float);

int main()
{
    float a[100];
    int n;
    float x;
    cout << "nhap x: ";
    cin >> x;
    Nhap(a, n);
    cout << "so xa nhat: " << xaNhat(a, n, x);
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
float xaNhat(float a[], int n, float x)
{
    float lc = a[0];
    for (int i = 0; i < n; i++)
    {
        if (abs(a[i] - x) > abs(lc - x))
            lc = a[i];
    }
    return lc;
}