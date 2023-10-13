#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int a[], int& n);
void Xuat(int a[], int n);
bool ktDang3m(int);
void LietKe(int [], int);

int main()
{
	int k;
	int b[500];
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	cout << endl;
	cout << "Liet ke: ";
	Lietke(b, k);
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

void Xuat(float a[], int n)
{
	cout << n << endl;
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << setprecision(5) << a[i];
}

bool ktDang3m(int)
{
	if (n < 1)
		return false;
	bool flag = true;
	int t = n;
	while (t > 1)
	{
		int du = t % 3;
		if (du != 0)
			flag = false;
		t /= 3;
	}
	return flag;
}

void Lietke(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (ktDang3m(a[i]))
			cout << a[i];
}