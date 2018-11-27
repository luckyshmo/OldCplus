#include <iostream> 
#include <fstream>
#include <conio.h>
#include <math.h>
#include <cmath>
#include <cstdlib>
using namespace std;
int main ()
{
    int n,  a, b, f, min1,max1,min2,max2; double d=0;
    ifstream inputFile ("test.txt");
    inputFile >> n;
    int *t = new int[n];
    for (int i = 0; i < n; i++) 
    {
        inputFile >> f;
        t[i] = f;
    }
	 inputFile >> a;
	int *h = new int[a];
    for (int i = 0; i < n; i++) 
    {
        inputFile >> b;
        h[a] = b;
    }
	min1=INT_MAX;
	max1=INT_MIN;
	for (int i=0; i<n; i++)
	{
		if (t[i]>=min1)
		{
			max1=t[i];
		}
		if (t[i]<=max1)
		{
			min1=t[i];
		}
	}
	for (int i=0, max2=INT_MIN, min2=INT_MAX; i<a; i++)
	{
		if (t[i]>=min2)
		{
			max2=t[i];
		}
		if (t[i]<=max2)
		{
			min2=t[i];
		}
	}
	cout<< "min1: "<< min1<< ", max1: " <<max1<<", min2: "<<min2<< ", max2: "<<max2;
    delete [] t;
    inputFile .close ();
    _getch ();
    return 0;
}