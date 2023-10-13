#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void Lietke(float[],int, int, int);

int main()
{
	int k;
	float b[500];
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "Liet ke: ";
	Lietke(b, k);
	return 0;
}

void Nhap(float a[], int& n
{
		cout << "Nhap n: ";
		cin >> n;
		srand(time(NULL));
		for (int i = 0; i <= n - 1; i++)
			a[i] = -100.0 + (rand() / (RAND_MAX / (200.0)));
}

void Xuat(float a[], int n)
{
		cout << n << endl;
		for (int i = 0; i <= n - 1; i++)
			cout << setw(10) << setprecision(5) << a[i];
}

void Lietke(float a[], int n, int x, int y);
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] >= x && a[i] <= y)
			cout << a[i];
}
