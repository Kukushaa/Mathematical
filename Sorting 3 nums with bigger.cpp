#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int a;
    int b;
    int c;

    cout << "Enter first number: "; cin >> a;
    cout << "Enter second number: "; cin >> b;
    cout << "Enter third number: "; cin >> c;

    if (a <= b && a <= c)
    {
        cout << a <<" ";

        if (b <= c)
        {
            cout << b << " " << c;
        }

        else
        {
            cout << c << " " << b;
        }
    }

    else if (b <= c && b <= a)
        {
            cout << b << " ";

            if (a <= c)
            {
                cout << a << " " << c;

                else
                {
                    cout << c << " " << a;
                }
            }
        }

        else
        {
            cout << c << " ";

            if (b <= a)
            {
                cout << b << " " << a;

                else
                {
                    cout << a << " " << b;
                }
            }
        }
        
    return 0;
}