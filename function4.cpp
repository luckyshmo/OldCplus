#include <iostream> 
#include <fstream>
#include <conio.h>
#include <math.h>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <time.h>  
using namespace std;
int main ()
{
	int n,j=0;
	double b,c,res=0,s=0,g=0;
	vector <double> x;
	vector <double> y;
	cin>> n;
	x.resize (n);
	y.resize (n);
	srand(time(NULL));
	for (int i=0; i<n/2;)
	{
		c=rand();
		//cout<<"c="<<c<<endl;
		if (c<10000)
		{
			c=c/10000;
			x[i]=c;
			//cout<<"x"<<i<< " is "<<x[i]<<endl;
			i++;
			j=i;
		}
	}
	while (j<n)
	{
		c=-rand();
		//cout<<"c="<<c<<endl;
		if (c>-10000)
		{
			c=c/10000;
			x[j]=c;
			//cout<<"x"<<j<< " is "<<x[j]<<endl;
			j++;
		}
	}
	for (int i=0; i<n;)
	{
		c=rand();
		//cout<<"c="<<c<<endl;
		if (c<10000)
		{
			c=c/10000;
			y[i]=c;
			//cout<<"y"<<i<< " is "<<y[i]<<endl;
			i++;
		}
	}
	int i;
	for (i=0;i<n;i++)
	{
		b=x[i]; 
		c=y[i];
		if (c<=sqrt(1-b*b))
		{
			res+=1;
		}		
	}
	cout<<"res="<< res<<endl;
	s=res/n*2;
	cout<< s;
	_getch ();
	return 0;
}