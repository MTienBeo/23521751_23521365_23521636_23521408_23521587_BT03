#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int tanSuat(int[], int&, float);

int main()
{
    int a[100];
    int n;
    float x;
    cout << "nhap x: ";
    cin >> x;
    Nhap(a, n);
    cout << "so luong la: " << tanSuat(a, n, x);
    return 0;
}

void Nhap(int a[], int& n)
{
    cout << "nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "]: ";
        cin >> setw(8) >> a[i];
    }
}

int tanSuat(int a[], int& n, float x)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
            dem++;
    }
    return dem;
}