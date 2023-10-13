#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int a[], int& n);
void Xuat(int a[], int n);
int ktTonTai(int[], int);

int main()
{
	int k;
	int b[500];
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << ktTonTai(b, k);
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

int ktTonTai(int a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n - 1; i++)
		if (a[i] == 0 && a[i + 1] == 0)
			flag = 1;
	return flag;
}