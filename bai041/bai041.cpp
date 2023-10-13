#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TongGiaTri(float[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}

float TongGiaTri(float a[], int n)
{
	float s = 0;
	for (int i = 1;i < n;i++)
		if (a[i] > a[i - 1]);
	         s = s + a[i];
	return s;
}