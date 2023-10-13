#include<iostream>
#include<iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
void Nhap(int[], int&, int[], int&);
void Tron(int[], int, int[], int, int[], int&);
void Hoanvi(int&, int&);
void SapTang(int[], int);
void Xuat(int[], int);
void Xuat2(int[], int);

int main()
{
	int a[200];
	int b[200];
	int c[200];
	int m;
	int n;
	int p;
	Nhap(a, n, b, m);
	SapTang(a, n);
	SapTang(b, n);
	Xuat(a, n);
	Xuat(b, m);
	Tron(a, n, b, m, c, p);
	cout << "Tron hai mang theo thu tu giam dan: " << endl;
	Xuat2(c, p);
}
void Nhap(int a[], int& n, int b[], int& m)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 200;
	}
	cout << "Nhap m: ";
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		b[i] = rand() % 200;
	}
}
void Tron(int a[], int n, int b[], int m, int c[], int& p)
{
	int i = n - 1;
	int j = m - 1;
	p = 0;
	while (i >= 0 && j >= 0)
	{
		if (i < n && j<m && a[i]>b[j])
			c[p++] = a[i--];
		else
			c[p++] = b[j--];
	}
}
void SapTang(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
				Hoanvi(a[i], a[j]);
		}
	}
}

void Hoanvi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
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