#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int a[], int& n);
void Xuat(int a[], int n);
void LietKe(int a[], int n, int x, int y);

int main()
{
	int k, x, y;
	int b[500];
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "Liet ke: ";
	LietKe(b, k, x, y);
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

void LietKe(int a[], int n, int x, int y)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] >= x && a[i] <= y)
			if (a[i] % 2 == 0 )
			cout << a[i] << " ";
}