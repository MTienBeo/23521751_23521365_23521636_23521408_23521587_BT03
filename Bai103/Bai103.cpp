#include<iostream>
using namespace std;
void Nhap(int[], int&);
int ChanDau(int[], int);
int ChanNhoNhat(int[], int);
void Xuat(int[], int);

int main()
{
	int n;
	int a[200];
	Nhap(a, n);
	Xuat(a, n);
	cout << "So chan nho nhat trong mang la: " << ChanNhoNhat(a, n) << endl;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % ( 200);
	}
}

int ChanDau(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			return a[i];
	}
	return -1;
}
int ChanNhoNhat(int a[], int n)
{
	int lc = ChanDau(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < n; i++)
	{
		if ((a[i] % 2 == 0) && (a[i]< lc))
			lc = a[i];
	}
	return lc;
}
void Xuat(int a[], int n)
{
	cout << "Cac gia tri trong mang la: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl;
}