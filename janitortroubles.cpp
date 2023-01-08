#include <iostream>
#include <math.h>
#include <iomanip>
#include <ios>

using namespace std;

double maxArea(double a, double b,
                double c, double d)
{

    double semiperimeter = (a + b + c + d) / 2;
  
    return sqrt((semiperimeter - a) *
                (semiperimeter - b) *
                (semiperimeter - c) *
                (semiperimeter - d));
}

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << setprecision(15);
    cout << maxArea(a, b, c, d);

    return 0;
}
