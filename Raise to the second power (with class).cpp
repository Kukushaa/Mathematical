#include <iostream>
#include <cmath>
using namespace std;

double getNum(string msg = "")
{
    double tmp = 0;

    cout << msg;
    cin >> tmp;

    return tmp;
}

struct raise
{
    double a;
    double b;
    double c;

    double D(){
        return (b * b) - (4 * a * c);
    }

    double X_1(){
        return ((-b) + sqrt(D())) / (2 * a);
    }

    double X_2(){
        return ((-b) - sqrt(D())) / (2 * a);
    }

    double S(){
        return (X_1() + X_2()) / 2;
    }

    double velues()
    {
        if (D() < 0)
        {
            cout << "D < 0" << endl;
        }

        else if (D() == 0)
        {
            cout << "X = " << (-b) / (2 * a) << endl;
        }
        
        else
        {
            return D();
        }

        return 0;
    }

    void display()
    {
        D();
        velues();

        cout << "X_1 = " << X_1() << endl;
        cout << "X_2 = " << X_2() << endl;
        cout << "X_1 + X_2 / 2 = " << S() << endl;
    }

    void entry()
    {
        a = getNum("A = ");
        b = getNum("B = ");
        c = getNum("C = ");
    }
};

int main()
{
    raise raise;

    raise.entry();
    raise.display();

    return 0;
}