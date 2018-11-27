#include <iostream>
#include <conio.h>
#include <math.h>
#include <cmath>
using namespace std;
int main ()
{ int n, m, g;
cout<< "enter number: ";
cin>> n;
if (n>=0)
	{
	for (m=1, g=0; m<=n; m++)
		{
		g+=m;
		}
	cout<< "sum: "<< g;
	}
else 
	{
	cout<< "error";
	}
_getch ();
return 0;
} //готово