#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
bool ktSong(int[], int);
void Xuat(int[], int);

int main()
{
	int a[200];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "Kiem tra dang song " << endl;
	cout << "Gia tri tra ve: " << ktSong(a, n);
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
bool ktSong(int a[], int n)
{
	if (n <= 1)
		return 0;
	if (n == 2)
	{
		if (a[0] == a[1])
			return 0;
		else
			return 1;
	}
	int flag = 1;
	for (int i = 0; i < n - 1; i++)
	{
		if ((a[i] - a[i + 1]) * (a[i] - a[i - 1])<=0)
			flag = 0;
	}
	return flag;
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