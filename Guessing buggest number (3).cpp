#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int a;
    int b;
    int c;	

    cout << "Enter First Number: "; cin >> a;
    cout << "Enter second number: "; cin >> b;
    cout << "Enter Third Number"; cin >> c;

    if (a >= b && a >= c)
        cout<<"Bigger is first number: " << a;

    else if (b >= a && b >= c) 
        cout<<"Bigger is second number: " << b;

    else
        cout<<"Bigger is third number: " << c;

    return 0;
}
