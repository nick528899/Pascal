#include <iostream>

#include <cmath>

#define M 0

using namespace std;

int nPr(int n, int r);

int nCr(int n, int r);

int f(int n);

int main()
{

	int h, r = 0;

	cin >> h;

	for (int i = 1; i <= h; i++)
	{

		for (int j = h - i; j >= 1; j--)
			cout << " ";

		for (int j = 1; j <= i; j++)
			cout << nCr(i - 1, r) << " ",
				r++;

		r = 0;

		cout << endl;
	}

	cin >> r; // breakpoint.
}

int f(int n)
{

	int ans = 1;

	if (n == 0)
		ans = 1;
	else
		for (int i = n; i >= 1; i--)
			ans = ans * i;
	return ans;
}

int nPr(int n, int r)
{

	int ans;

	r = f(n - r);

	n = f(n);

	ans = n / r;

	return ans;
}

int nCr(int n, int r)
{

	int ans = 1;

	ans = nPr(n, r);

	ans = ans / f(r);

	return ans;
}
