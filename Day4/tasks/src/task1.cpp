#include<iostream>
#include<math.h>
using namespace std;


double f(double mu, double sigma2, double x)
{
    double frac =  1/sqrt(sigma2*2*M_PI);
    double ex = exp(-0.5* ( (pow(x-mu, 2))/sigma2));
    return frac * ex;
}

int main()
{
    cout<< f(10.0, 4.0, 8.0)<<endl;
    return 0;
}
