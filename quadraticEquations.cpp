#include <iostream>
#include <conio.h>
#include <math.h>
#include <cmath>
using namespace std;
int main ()
{// ax*x+qx+p=0, D=q*q-4*a*p, x1=(-q+sqrt(D))/2*a, x2=(-q-sqrt(D))/2*a
	double a, q, p, D,x1,x2,i;
	cout<< "enter a,q,p for ax*x+qx+p=0: ";
	cin>> a>> q>> p;
	D=q*q-4*a*p;
	if (D>=0)
	{
		i=a*2;
		x1=-q+sqrt(D);
		x1=x1/i;
		x2=-q-sqrt(D);
		x2=x2/i;
		cout<< "solution is: " << x1 << " and "<< x2;
	}
	else
	{
		cout<< "no solution";
	}
	_getch ();
    return 0;
}