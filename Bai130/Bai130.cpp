#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int a[], int& n);
void Xuat(int a[], int n);
int TanSuat(int[], int, int);
int ktThuoc(int[], int, int[], int);

int main()
{
	int k, q;
	int b[500];
	int a[500];
	Nhap(a, q);
	cout << "Mang A ban dau: ";
	Xuat(a, q);
	cout << endl;
	Nhap(b, k);
	cout << "Mang B ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << ktThuoc(a, q, b, k);
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
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

int ktThuoc(int a[], int n, int b[], int m)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
		if (TanSuat(b, m, a[i]) == 0)
			flag = 0;
	return flag;
}