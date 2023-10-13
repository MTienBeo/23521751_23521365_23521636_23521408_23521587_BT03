#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
bool ktToanLe(int);
int ToanLeDau(int[], int);
int Timgiatri(int[], int);
void Xuat(int[], int);

int main()
{
	int n;
	int a[200];
	Nhap(a, n);
	Xuat(a, n);
	cout << "So toan le lon nhat trong mang la: " << Timgiatri(a, n) << endl;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (200);
	}
}
bool ktToanLe(int k)
{
	int t = k;
	while (t!= 0)
	{
		if (t % 2 == 0)
			return false;
		t = t/10;
	}
	return true;
}
int ToanLeDau(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (ktToanLe(a[i]) != 0)
			return a[i];
	}
	return 0;
}
int Timgiatri(int a[], int n)
{
	int lc = ToanLeDau(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i < n; i++)
	{
		if ((ktToanLe(a[i]) == 1) && (a[i] > lc))
			lc = a[i];
	}
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