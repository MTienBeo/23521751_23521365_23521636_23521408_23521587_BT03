#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
bool ktNT(int[]);
int demNT(int[], int&);

int main()
{
    int a[100];
    int n;
    Nhap(a, n);
    cout << "so luong la: " << demNT(a,n);
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
bool ktNT(int k)
{
    int dem = 0;
    for (int i = 1; i <=k; i++)
    {
        if (k % i == 0)
            dem++;
        if (dem == 2)
            return true;
    }
    return false;
}
int demNT(int a[], int& n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (ktNT(a[i]))
            dem++;
    }
    return dem;
}