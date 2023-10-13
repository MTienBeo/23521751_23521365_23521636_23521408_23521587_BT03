#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int chanKeNhau(int[], int);
int main()
{
    int a[100];
    int n;
    Nhap(a, n);
    cout << "so luong la: " << chanKeNhau(a, n);
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
int chanKeNhau(int a[], int n)
{
    if (n <= 1)
        return 0;
    int dem = 0;
    if (a[0] % 2 == 0 && a[1] % 2 == 0)
        dem++;
    for (int i = 1; i <= n - 2; i++)
    {
        if (a[i] % 2 == 0)
            if (a[i - 1] % 2 == 0 || a[i + 1] % 2 == 0)
                dem++;
        if (a[n - 1] % 2 == 0 && a[n - 2] % 2 == 0)
            dem++;
    }

    return dem;
}


