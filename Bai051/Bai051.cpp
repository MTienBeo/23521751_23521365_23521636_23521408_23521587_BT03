#include <iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
int demGiaTri(int[], int&);
int main()
{
		
		int a[100];
		int n;
		Nhap(a, n);
		cout << "so luong la: " << demGiaTri(a, n);
		return 0;
}
void Nhap(int a[], int& n)
{
	cout << "nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >>setw(8)>>a[i];
	}
}
int demGiaTri(int a[], int& n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 7 == 0 && a[i] != 0)
			dem++;
	}
	return dem;
	cout << "so luong la: " << dem;
}