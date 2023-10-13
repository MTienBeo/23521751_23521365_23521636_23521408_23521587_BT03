#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int i = 1;
	int dem = 0;
	while (i <= n)
	{
		if (n % i == 0) dem++;
		i++;
	}
	if (dem == 2) cout << "so nguyen to";
	else cout << " Ko nguyen to";

	return 0;
}