#include <iostream>
#include <conio.h>
#include <math.h>
#include <cmath>
using namespace std;
int main ()
{ int n, m, a, g, z;double w;
cout<< "enter number of numbers: ";
cin>>n;
if (n>0)
{
		for (m = 1, w=0.1, z=0; m <= n; m++)
	{	w*=10;
		cout<< "number: ";
		cin>> a;
		g=a*w;
		z+=g;
	} 
		cout<<"opa" << z;
}
else 
{
	cout<< "error";
}
	
	
    _getch ();
    return 0;
} //ready