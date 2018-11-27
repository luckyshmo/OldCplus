#include <iostream>
#include <fstream>
#include <conio.h>
#include <math.h>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <time.h>
#include <algorithm>
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
int main()
{
    int n=0, d=0, k=0, s=0, sum=0,max=0,num=0;
    cout<<"Enter n: "<<endl;
    cin>>n;
    vector<int> ar;
    for (int i=0; i<n;i++)
    {
        cout<<"Enter d and k: "<<endl;
        cin>>d>>k;
        //cout<<d<<" and "<<k<< endl;
        s=k/d;
        s=k-s*d;
        if (s==k)
        {
            s=0;
        }
        ar.push_back(s);
    }
    QuickSort (0, ar.size()-1, ar);
    for (int i=0; i<n;i++)
    {
        cout<<"In "<<i<<": "<<ar[i]<<endl;

    }
    sum=0;
    for (int i=0; i<n;i++)
    {
		sum=0;
		while (ar[i]==ar[i+1])
		{
			sum++;
			i++;
		}
		if (sum>max)
		{
			num=ar[i-1];
			max=sum;
		}
    }
	cout<<"max is "<<num;
    _getch();
    return 0;
}