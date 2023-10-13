#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
int UCLN(int, int);
int BCNN(int, int);
int TimBCNN(int a[], int);
void Xuat(int[], int);

int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	Xuat(a, n);
	cout << "Boi chung nho nhat cua mang la: " << TimBCNN(a, n);
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (100);
	}
}
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a + b;
}
int BCNN(int a, int b)
{
	return abs(a * b) / UCLN(a, b);
}
int TimBCNN(int a[], int n)
{
	int lc = a[0];
	for (int i = 0; i < n; i++)
		lc = BCNN(lc, a[i]);
	return lc;
}
void Xuat(int a[], int n)
{
	cout << "Cac gia tri trong mang la: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << setw(7) << setprecision(4) << a[i];
	}
	cout << endl;
}
