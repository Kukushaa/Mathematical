#include <iostream>
using namespace std;

int fiborec(int n)
{
	if(n == 0 || n == 1) return n;

	return fiborec(n - 2) + fiborec(n - 1);
}

int main(int argc, char const *argv[])
{
	int n;

	cout << "n = ";
	cin >> n;

	cout << "Fibonashi of " << n << " = " << fiborec(n) << endl;

	return 0;
}