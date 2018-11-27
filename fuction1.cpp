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
	int b,n,l1,l2;
	vector <int> a;
	cout<<"enter lengh: ";
	cin>> n;
	cout<<"enter range: ";
	cin>>l1>>l2;
	a.resize (n);
	for (int i=0; i<n;)
	{
		b=rand();
		if (b>=l1 && b<=l2)
		{
			a[i]=b;
			cout<<"number in "<<i<< " is "<<a[i]<<endl;
			i++;
		}
		
	}
	_getch ();
	return 0;
}
//получаем абсолютно одинаковые числа при олинаковом начале