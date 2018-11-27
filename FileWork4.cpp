#include <iostream> 
#include <fstream>
#include <conio.h>
#include <math.h>
#include <cmath>
#include <cstdlib>
using namespace std;
int main ()
{
	int n, a,b,q=0;
	ifstream inputFile ("inf.txt");
	ofstream outFile ("answer.txt");
	inputFile>> n;
	if (n>=1 && n<=10000) 
	{
		for (int i=0, f=1; i<n; i++, f++)
		{
			inputFile>>a>>b;
			if (a>=1 && b>=1 && a<=1000 && b<=100)
			{
				q=q+a*b;
			}
			else
			{
				outFile<< "wrong 't' or 'v' in line "<<f<<"\n";
			}
		}
		outFile<<q;
	}
	else
	{
		outFile<< "wrong information";
	}
	return 0;
}