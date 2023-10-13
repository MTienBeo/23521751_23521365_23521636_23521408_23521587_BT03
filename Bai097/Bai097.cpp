#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktHoanThien(int n);
int timGiaTri(int[], int n);

int main()
{
    int a[100];
    int n;
    Nhap(a, n);
    Xuat(a, n);
    int kq = timGiaTri(a, n);
    if (kq == -1)
        cout << "khong ton tai";
    else cout << "vi tri la : " << kq;
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

bool ktHoanThien(int k)
{
    bool flag = true;
    int s = 0;
    for (int i = 1; i < k; i++)
    {
        if (k % i == 0)
            s = s + i;
    }
    if (s == k)
        return true;
    return false;
}
int timGiaTri(int a[], int n)
{
    for (int i = n - 1; i >= 0; i--)
        if (ktHoanThien(a[i]))
            return i;
    return -1;
}