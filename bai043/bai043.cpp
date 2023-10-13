#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TongCucDai(float[], int);

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

float TongCucDai(float a[], int n)
{
	if (n <= 1)
		return 0;
	float s = 0;
	if (a[0] > a[1])
		s = s + a[0];
	for (int i = 1;i <= n - 2;i++)
		if (a[i] > a[i - 1] && a[i] > a[i + 1])
			s = s + a[i];
	if (a[n - 1] > a[n - 2])
		s = s + a[n - 1];
	return s;
}