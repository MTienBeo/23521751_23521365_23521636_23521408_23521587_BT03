#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
void Nhap(string, int a[], int& n);
void Xuat(int a[], int n);

int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	Xuat(a, n);
	return 0;
}

void Nhap(string filename, int a[], int& n)
{
	ifstream fi(filename);
	fi >> n;
	for (int i = 0; i <= n - 1; i++)
		fi >> a[i];
}
void Xuat(int a[], int n)
{
	cout << n << endl;
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}