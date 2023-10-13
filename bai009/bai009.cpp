#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ChuSoDau(int n);
void Lietke(int[], int);

int main()
{
	int k;
	int b[500];
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "liet ke: ";
	Lietke(b, k);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= n - 1; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (200.0)));
}

void Xuat(int a[], int n)
{
	cout << n << endl;
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << setprecision(5) << a[i];
}

int ChuSoDau(int n)
{
	int dt = abs(n);
	while (dt >= 10)
		dt = dt / 10;
	return dt;
}

void Lietke(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (ChuSoDau(a[i]) % 2 == 0)
			cout << a[i] << " ";
}
