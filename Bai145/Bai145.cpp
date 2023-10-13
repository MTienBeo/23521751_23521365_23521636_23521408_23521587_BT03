#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Hoanvi(float&, float&);
void Amgiam(float[], int);
void Duongtang(float[], int);
void Xuat(float[], int);
void Xuat2(float[], int);

int main()
{
	float a[200];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	Amgiam(a, n);
	Duongtang(a, n);
	cout << "Mang co cac so thuc duong tang dan, so thuc am giam dan: " << endl;
	Xuat2(a, n);
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = -100.0 + (rand() / ((RAND_MAX) / 200.0));
	}
}
void Hoanvi(float& x, float& y)
{
	float temp = x;
	x = y;
	y = temp;
}
void Amgiam(float a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i]<0&&a[j]<0&&a[i]<a[j])
				Hoanvi(a[i], a[j]);
		}
	}
}
void Duongtang(float a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > 0 && a[j] > 0 && a[i] > a[j])
				Hoanvi(a[i], a[j]);
		}
	}
}
void Xuat(float a[], int n)
{
	cout << "Cac gia tri trong mang la: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << setw(7) << setprecision(4) << a[i];
	}
	cout << endl;
}
void Xuat2(float b[], int k)
{
	for (int i = 0; i < k; i++)
	{
		cout << setw(7) << setprecision(4) << b[i];
	}
}