#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float a[], int& n);
void Xuat(float a[], int n);
int TimViTri(float[], int, float);

int main()
{
	int k;
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float b[500];
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "Vi tri: ";
	cout << TimViTri(b, k, x);
	return 0;
}

void Nhap(float a[], int& n)
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

int TimViTri(float a[], int n, float x)
{
	int lc = 0;
	for (int i = 0; i < n; i++)
		if (abs(a[i] - x) < abs(a[lc] - x))
			lc = i;
	return lc;
}