#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktDoiXung( int n);
int DoiXungDau(int[], int n);

int main()
{
    int a[100];
    int n;
    Nhap(a, n);
    Xuat(a, n);
    float kq = DoiXungDau(a, n);
    if (kq == 10)
        cout << "khong ton tai";
    else cout << "so doi xung dau tien la: " << kq;
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

void Xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(8) << a[i];
    cout << endl;
}
bool ktDoiXung(int n)
{
    int t = n;
    int dn = 0;
    while (t != 0)
    {
        dn = dn * 10 + t % 10;
        t /= 10;
    }
    if (dn == n)
        return true;
    return false;
}
int DoiXungDau(int a[], int n)
{
    for (int i = 0; i < n; i++)
        if (ktDoiXung(a[i]))
            return a[i];
    return 10;
}