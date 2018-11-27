#include <iostream> 
#include <fstream>
#include <conio.h>
#include <math.h>
#include <cmath>
#include <vector>
#include <cstdlib>
using namespace std;
int main ()
{
	int b,c,n,l1,l2;
	vector <int> a;
	cout<<"enter lengh: ";
	cin>> n;
	cout<<"enter range: ";
	cin>>l1>>l2;
	a.resize (n);
	for (int i=0; i<n;)
	{
		c=rand();
		b=rand();
		if (b>=l1 && b<=l2)
		{
			a[i]=b;
			cout<<"number in "<<i<< " is "<<a[i]<<","<<c<<endl;
			i++;
		}
		
	}
	_getch ();
	return 0;
}