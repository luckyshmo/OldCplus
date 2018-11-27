#include <iostream>
#include <conio.h>
#include <math.h>
#include <cmath>
using namespace std;
int main ()
{ int t[12884901], i, S=0; 
for (i=0; i<10; i++)
{
	cout<< "enter number: ";
	cin>> t[i];
	if (t[i]>0)
	{
		S+=t[i];
	}
}
cout<< "sum: "<< S;
_getch ();
return 0; }