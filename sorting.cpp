#include <iostream> 
#include <fstream>
#include <conio.h>
#include <math.h>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <string.h>
//#include <iostream.h>
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
	int n,k,i=0;
	ifstream inf("inf.txt");
	inf>>n;
	inf>>k;
	struct datas
	{
		int year,month,day,hour,minute,sec;
	};
	datas obj[100000];
	datas.sec=87
	for (int i=0; i<n; i++)
	{
		inf>>datas.day;
	}
}