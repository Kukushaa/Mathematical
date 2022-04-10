#include <iostream>
using namespace std;

int plius(int n)
{
	int s = 0;

	do
	{
		s = s + n % 10;
		n = n / 10;
		
	}while(n > 0);

	return s;
}

int main(int argc, char const *argv[])
{
	int n;

	cout << "Enter Number = "; cin >> n;

	cout << " = " << plius(n) << endl;
	
	return 0;
}