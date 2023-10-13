#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&, int[], int&);
void Hoanvi(int&, int&);
void SapTang(int[], int);
bool ktHoanVi(int[], int, int[], int);
void Xuat(int[], int);
void Xuat2(int[], int);

int main()
{
	int a[200];
	int b[200];
	int m;
	int n;
	Nhap(a, n, b, m);
	Xuat(a, n);
	Xuat(b, m);
	SapTang(a, n);
	cout << "Kiem tra hai mang co hoan vi: " << endl;
	cout << "Gia tri tra ve: " << ktHoanVi(a, n, b, m);
}
void Nhap(int a[], int& n, int b[],int& m)
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
void Hoanvi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
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
bool ktHoanVi(int a[], int n, int b[], int m)
{
	if (m != n)
		return 0;
	SapTang(a, n);
	SapTang(a, m);
	bool flag = 1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] != b[i])
			flag = 0;
	}
	return flag;
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