#include <iostream>
#include <conio.h>
#include <math.h>
#include <cmath>
using namespace std;
int main ()
{ int n, m, a, g,w;
g=-2^30;
w=2^30;
cout<< "enter number of numbers: ";
cin>>n;
if (n>0)
	{
	
for (m = 1; m <= n; m++)
	{	
		cout<< "number: ";
		cin>> a;
		if (a<=w)
			{
				w=a;
			}
		if (a>=g)
			{
				g=a;
			}	
	} cout<< "min: " <<w <<"  " <<"max: "<<g;
}
else 
{
	cout<< "error";
}
	
	
    _getch ();
    return 0;
} //ready