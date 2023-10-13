#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktDang2m(int n);
int timGiaTri(int[], int n);

int main()
{
    int a[100];
    int n;
    Nhap(a, n);
    Xuat(a, n);
    float kq = timGiaTri(a, n);
    if (kq == 0)
        cout << "khong ton tai";
    else cout << "so  dau tien co dang la: " << kq;
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

bool ktDang2m( int n)
{
    if (n < 1)
        return false;
    int t = abs(n);
    bool flag = true;
    while (t > 1)
    {
        int du = t % 2;
        if (du != 0)
            flag = false;
        t = t / 2;
    }
    return flag;
}

int timGiaTri(int a[], int n)
{
    for (int i = 0; i < n; i++)
        if (ktDang2m(a[i]))
            return a[i];
    return 0;
}