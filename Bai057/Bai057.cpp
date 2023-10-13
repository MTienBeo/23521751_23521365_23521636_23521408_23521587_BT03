#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int demChan(int [],int);
int demLe(int[], int);
int tuongQuan(int[], int);
int main()
{
    int a[100];
    int n;
    Nhap(a, n);
    int dem = tuongQuan(a, n);
    if (dem ==1)
        cout << "chan nhieu hon";
    if (dem ==-1)
        cout << "le nhieu hon";
    else
        cout << "bang nhau ";
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
int demChan(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            dem++;
    }
    return dem;
}
int demLe(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
            dem++;
    }
    return dem;
}
int tuongQuan(int a[], int n)
{
    int x = demChan(a, n);
    int y = demLe(a, n);
    if (x > y)
        return 1;
    if (x < y)
        return -1;
    return 0;
}
