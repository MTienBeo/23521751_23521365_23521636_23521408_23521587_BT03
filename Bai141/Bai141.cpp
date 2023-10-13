#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
bool ktHoanThien(int);
void HoanThienGiam(int[], int);
void HoanVi(int&, int&);
void Xuat(int[], int);
void Xuat2(int[], int);

int main()
{
	int a[200];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	HoanThienGiam(a, n);
	cout << "Mang moi" << endl;
	Xuat2(a, n);
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 200;
	}
}
void Hoanvi(int& x, int& y)
{
	float temp = x;
	x = y;
	y = temp;
}
bool ktHoanThien(int k)
{
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
void HoanThienGiam(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (ktHoanThien(a[i]) && ktHoanThien(a[j]) && a[i]<a[j])
				Hoanvi(a[i], a[j]);
		}
	}
}
void Xuat(int a[], int n)
{
	cout << "Cac gia tri trong mang la: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << setw(7) << setprecision(4) << a[i];
	}
	cout << endl;
}
void Xuat2(int b[], int k)
{
	for (int i = 0; i < k; i++)
	{
		cout << setw(7) << setprecision(4) << b[i];
	}
}