#include <iostream> 
#include <fstream>
#include <conio.h>
#include <cmath>
#include <vector>
#include <cstdlib>
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
	int n=0,p1=0,p2=0;
	vector <int> a;
	//ifstream inF ("inf.txt");
	//ofstream outF ("answer.txt");
	cin>>n;
	a.resize (n);
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	QuickSort (0,a.size ()-1 ,a);
	for (int i=n-1;i>=0;i--)
	{
		if (p1>=p2)
		{
			p2+=a[i];
		}
		else
		{
			p1+=a[i];
		}
	}
	if (p1>=p2)
		{
			p1=p1-p2;
		}
		else
		{
			p1=p2-p1;
		}
	cout<< p1;
	_getch ();
	return 0;
}