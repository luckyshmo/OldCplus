#include <iostream>
#include <conio.h>
#include <math.h>
#include <cmath>
using namespace std;
int main ()
{ int ai, S=0;
do 
{
	cout<< "number: ";
	cin>>ai;
	if (ai>=0 && ai<=9)
	{
		S=S*10+ai;
	}
	if (ai>=10)
	{
		cout<< "error\n";
	}
} 
while (ai>=0);
cout<< "number is: " << S;
_getch ();
return 0; }