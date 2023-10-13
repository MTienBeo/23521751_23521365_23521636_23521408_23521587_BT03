#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int a[], int& n);
void Xuat(int a[], int n);

int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	Xuat(a, n);
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