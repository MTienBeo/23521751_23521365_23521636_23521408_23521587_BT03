#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int);

int main()
{
	int b[500];
	int k;

	Nhap(b, k);
	cout << "\nMang ban dau : ";
	Xuat(b, k);
	cout << "\nMang cac so chan: ";
	LietKe(b, k);

	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu cua mang: ";
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

void LietKe(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			cout << setw(8) << a[i];
}