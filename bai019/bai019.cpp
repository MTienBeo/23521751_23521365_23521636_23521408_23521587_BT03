#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void LietKe(float[], int);
float Min(float[], int);

int main()
{
	float b[500];
	int k;

	Nhap(b, k);
	cout << "\nMang ban dau: ";
	Xuat(b, k);
	cout << "\nVi tri gia tri lon nhat trong mang: ";
	LietKe(b, k);

	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << setprecision(5) << a[i];
}

void LietKe(float a[], int n)
{
	float lc = Min(a, n);
	for (int i = 0; i < n; i++)
		if (a[i] == lc)
			cout << setw(5) << i;
}

float Min(float a[], int n)
{
	float lc = a[0];
	for (int i = 1; i < n; i++)
		if (a[i] < lc)
			lc = a[i];
	return lc;
}