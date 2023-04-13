#include <iostream>
using namespace std;

bool hamKiemTraSoNguyenTo(int n)
{
	if (n < 2)
		return false; //n khong phai so nguyen to
	else
	{
		for (int i = 2; i < n; i++)
		{
			if (n % i == 0)
				return false;
		}
		return true;
	}
}

void xuatCacChuSoNguyenTo(int n)
{
	while (n > 0)
	{
		if (hamKiemTraSoNguyenTo(n % 10) == true)
			cout << n % 10 << "  ";
		n = n / 10;
	}
}

int main()
{
	int n;
	do
	{
		cout << "\nNhap so n : ";
		cin >> n;
		if (n <= 0)
			cout << "\nNhap lai, n la so nguyen duong.";
	} while (n <= 0);
	
	xuatCacChuSoNguyenTo(n);
	return 0;
}