#include <iostream> 
#include <fstream>
#include <conio.h>
#include <math.h>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <time.h> 
using namespace std;
void QuickSort (int l, int r, vector <int>&ar)
{
	if (l>=r) 
	{	
		return;
	}
	int p=ar[l], i=l+1, j=r;
	while (i<=j)
	{
		while (i<=r && ar[i]<p)
		{
			i++;
		}
		while (j>l && ar[j]>=p)
		{
			j--;
		}
		if (i<=j)
		{
			swap (ar[i], ar[j]);
			i++;j--;
		}
	}
	swap (ar[l],ar[j]);
	QuickSort (l, j-1, ar); 
	QuickSort (i, r, ar);
}


int main ()
{
	srand(time(NULL));
	int l=0,r,n,p,i=0,j;
	ofstream outF ("answer.txt");
	vector <int> ar;
	cin>>n;
	for (int i=0,a;i<n;i++)
	{
		a=rand();
		ar.push_back (a);
		outF<<"elem in "<<i<<" is "<<a<<endl;
		r=i;
	}
	outF<<endl<<endl<<endl<<"r & l is "<<r<<", "<<l<<endl<<endl;
	j=r;
	QuickSort (0, ar.size()-1, ar);
	for (i=0;i<n;i++)
	{
		outF<<"elem in "<< i<<" is "<< ar[i]<<endl;
	}
	outF.close();
	return 0;
}