#include <iostream>
#include <conio.h>
#include <math.h>
#include <cmath>
using namespace std;
int main ()
{ double a,b,n,c,g,x,y,i;
int d;
cout<< "1 mean +, 2 mean -,3 mean /, 4 mean *, 5 mean ^, 6 mean sqrt.\nEnter number: ";
cin>>n;
if (n==6)
	{
	cout<< "Enter number: ";
	cin>> a;
	i=sqrt(a);
	cout<< "Sqrt is: "<< i;
	}
else {
if (n==1 || n==2 || n==3 || n==4 || n==5)
{
	cout<< "Enter first number: ";
	cin>> a;
	cout<< "Enter second number: ";
	cin>> b;
	if (n==1)
		{
			a+=b;
		}
	if (n==2)
		{
			a-=b;
		}
	if (n==3)
		{
			a=a/b;
		}
	if (n==4)
		{
			a=a*b;
		}
	if (n==5)
		{
			for (d=1, c=a; d<b; d++)
				{
				c=c*a;
				}
			a=c;
		}
	cout<< "Answer is "<<a<< ". ";
	}
else 
	{
	cout<< "Error. ";
	}
}
x=1; y=1;
cout<< "\ncontinue? ";
cin>> g;
while (g!=0)
{
	if (x>y)
	{
	cout<< "\ncontinue? ";
	cin>> g; 
	}
	x+=y;
if (g==0)
{
	cout<< "Thanks, goodbye!";
	
}
else 
{	cout<< "Your choice: ";
	cin>>n;
	if (n==6)
	{
		cout<< "Enter number: ";
		cin>> a;
		i=sqrt(a);
		cout<< "Sqrt is: "<< i;
	}
	else 
	{
		if (n==1 || n==2 || n==3 || n==4 || n==5)
		{
		cout<< "Enter first number: ";
		cin>> a;
		cout<< "Enter second number: ";
		cin>> b;
		if (n==1)
		{
			a+=b;
		}
		if (n==2)
		{
			a-=b;
		}
		if (n==3)
		{
			a=a/b;
		}
		if (n==4)
		{
			a=a*b;
		}
		if (n==5)
		{
			for (d=1, c=a; d<b; d++)
			{
				c=c*a;
			}
			a=c;
		}
		cout<< "Answer is "<<a<< ". ";
		}
	else 
		{
		cout<< "Error. ";
		}
	}}
	_getch ();
	
}return 0; 
}