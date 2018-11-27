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
	double b,c,res=0,s=0,g=0;
	vector <double> x;
	vector <double> y;
	cin>> n;
	x.resize (n);
	y.resize (n);
	srand(time(NULL));
	for (int i=0; i<n;)
	{
		c=rand();
		//cout<<"c="<<c<<endl;
		if (c<10000)
		{
			c=c/10000;
			b=rand();
			b=b+c;
			if (b<10)
			{
				x[i]=b;
				//cout<<"x"<<i<< " is "<<x[i]<<endl;
				i++;
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
				//cout<<"y"<<i<< " is "<<y[i]<<endl;
				i++;
			}
		}
	}
	int i;
	for (i=0;i<n;i++)
	{
		b=x[i]; 
		c=y[i];
		if (b<=5 && c<=b)
		{
			res+=1;
		}
		if (b>5 && c<=-b+10)
		{ 
			res+=1;
		}
		
	}
	cout<<"res="<< res<<endl;
	s=res/n*50;
	cout<< s;
	_getch ();
	return 0;
}