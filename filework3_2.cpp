#include <iostream> 
#include <fstream>
#include <conio.h>
#include <math.h>
#include <cmath>
#include <cstdlib>
using namespace std;
int main ()
{ int n, m, a, g,w, min=INT_MAX,max=INT_MIN;
g=INT_MIN;
w=INT_MAX;
ifstream inputFile ("test.txt");
inputFile>> n;
if (n>0)
{
	
	for (m = 1; m <= n; m++)
	{	
		inputFile>>a;
		if (a<=w)
			{
				w=a;
			}
		if (a>=g)
			{
				g=a;
			}	
	} 
	for (m=n; m<=n*n; m++)
	{
		inputFile>>a;
		if (a<=min)
			{
				min=a;
			}
		if (a>=max)
			{
				max=a;
			}	
	}
	ofstream outFile ("result.txt");
	outFile<< "min1: " <<w <<", " <<"max1: "<<g <<"\n"<< "min2: "<<min<<", "<<"max2: "<<max;
}
else 
{
	cout<< "error";
}
    return 0;
} //ready