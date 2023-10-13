#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
void Nhap(string, float a[], int& n);
void Xuat(float a[], int n);

int main()
{
	int k;
	string filename;
	cout << "Nhap file: ";
	cin >> filename;
	float b[500];
	Nhap(filename, b, k);
	Xuat(b, k);
	return 0;
}

void Nhap(string filename, float a[], int& n)
{
	ifstream fi(filename);
	fi >> n;
	for (int i = 0; i <= n - 1; i++)
		fi >> a[i];
}

void Xuat(float a[], int n)
{
	cout << n << endl;
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << setprecision(5) << a[i];
}