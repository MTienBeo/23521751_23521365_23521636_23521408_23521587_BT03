#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int a[], int& n);
void Xuat(int a[], int n);
int TanSuat(int[], int, int);
void LietKe(int[], int, int[], int);

int main()
{
	int k,n;
	int b[500];
	int m[500];
	Nhap(b, k);
	cout << "Mang A ban dau: ";
	Xuat(b, k);
	cout << endl;
	Nhap(m, n);
	cout << "Mang B ban dau: ";
	Xuat(m, n);
	cout << endl;
	cout << "So gia tri: ";
	LietKe(b, k, m, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= n - 1; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
	cout << n << endl;
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << setprecision(5) << a[i];
}

int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

void LietKe(int a[], int n, int b[], int m)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (a[j] == a[i])
				flag = 0;
		if (TanSuat(b, m, a[i]) == 0 && flag)
			cout << a[i] << " ";
	}
	for (int i = 0; i < m; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (b[j] == b[i])
				flag = 0;
		if (TanSuat(a, n, b[i]) == 0 && flag)
			cout << b[i] << " ";
	}
}