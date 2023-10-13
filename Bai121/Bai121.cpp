#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
bool ktHoanThien(int);
int ktTinhChat(int[], int);
void Xuat(int[], int);

int main()
{
	int a[200];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "Gia tri tra ve: " << ktTinhChat(a, n);
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (1000);
	}
}
bool ktHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
	{
		if (k % i == 0)
			s = s + i;
	}
	if (s == k)
		return true;
	return false;
}
int ktTinhChat(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if ((ktHoanThien(a[i]))&&(a[i]>256))
			dem++;
	}
	if (dem ==0)
			return 1;
	return 0;
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