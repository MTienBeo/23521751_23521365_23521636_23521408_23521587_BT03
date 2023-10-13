#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int a[], int& n);
void Xuat(int a[], int n);
bool ktChinhPhuong(int);
void LietKe(int a[], int n);

int main()
{
	int k;
	int b[500];
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "Liet ke: ";
	LietKe(b, k);
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

bool ktChinhPhuong(int n)
{
	for (int i = 0; (i * i) <= n; i++)
	{
		if (i * i == n)
					return true;
	}
	return false;
}

void LietKe(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (ktChinhPhuong (a[i]))
			cout << i << " ";
}