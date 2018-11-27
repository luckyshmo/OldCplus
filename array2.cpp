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
    double a,i=0,n,l,min=DBL_MIN,c=0,x1,x2,y1,y2,dx=0,dy=0;
	ifstream inputFile ("inf.txt");
    vector <double> arx;
	vector <double> ary;
    inputFile>>n;
    while (i<n)
    {
		i+=1;
		inputFile>>a;
		cout<<"ax="<<a<<endl;
        arx.push_back (a);
		inputFile>>a;
		cout<<"ay="<<a<<endl;
		ary.push_back (a);
    }
	i=0;
	while (i<=n)
	{
		y1=ary[i];
		x1=arx[i];
		x2=arx[c];
		y2=ary[c];
		dx=x1-x2;
		dy=y1-y2;
		l=sqrt(dx*dx+dy*dy);
		c+=1;
		if (min<=l)
		{
			min=l;
		}
		if (c==n-1)
		{
			i+=1;
			c=0;
		}
	}
    cout<<"answer is " <<min;
    _getch ();
    return 0;
}