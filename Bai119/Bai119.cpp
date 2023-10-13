#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
bool ktTontaiChan(int[], int);
void Xuat(int[], int);

int main()
{
	int a[200];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "Gia tri tra ve: " << ktTontaiChan(a, n);
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
bool ktTontaiChan(int a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2  == 0)
			flag = 1;
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