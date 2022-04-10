#include <iostream>
using namespace std;

double raise(double x, int n)
{
	double p = 1;

	for (int i = 1; i <= n; ++i)
	{
		p *= x;
	}

	return p;
}

int main(int argc, char const *argv[])
{
	int n;
	double x;

	cout << "Enter number ricxvi: "; cin >> x;
	cout << "Enter raise: "; cin >> n;

	cout << " = " << raise(x, n) << endl;

	return 0;
}