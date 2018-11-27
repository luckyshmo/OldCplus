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
	int n;
	double b,c,res=0,s=0,g=0,j=0;
	vector <double> x;
	vector <double> y;
	cin>> n;
	x.resize (n);
	y.resize (n);
	srand(time(NULL));
	for (int i=0; i<n*7/8;)
	{
		c=rand();
		//cout<<"c="<<c<<endl;
		if (c<10000)
		{
			c=c/10000;
			b=rand();
			b=b+c;
			if (b<7)
			{
				x[i]=b;
				//cout<<"x"<<i<<" is "<<x[i]<<endl;
				i++;
			}
			j=i;
		}
	}
	while (j<n)
	{
		c=-rand();
		//cout<<"c="<<c<<endl;
		if (c<10000)
		{
			c=c/10000;
			b=-rand();
			b=b+c;
			if (b>-1)
			{
				x[j]=b;
				//cout<<"x"<<j<<" is "<<x[j]<<endl;
				j++;
			}
		}
	}
	for (int i=0; i<n;)
	{
		c=rand();
		b=rand();
		if (c<10000)
		{
			c=c/10000;
			b=b+c;
			if (b<5)
			{
				y[i]=b;
				//cout<<"y"<<i<<" is "<<x[i]<<endl;
				i++;
			}
		}
	}
	int i;
	for (i=0;i<n;i++)
	{
		b=x[i]; 
		c=y[i];
		if (b<=4 && c<=b+1)
		{
			res+=1;
		}
		if (b>4 && c<=-2*b+13)
		{ 
			res+=1;
		}
		
	}
	cout<<"res="<< res<<endl;
	s=res/n*40;
	cout<< s;
	_getch ();
	return 0;
}