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
	srand(time(NULL));
	ofstream outFile ("answer.txt");
	int n,np=0,N,save=0;
	double p,probability;
	cin>> probability;
	n=2;N=INT_MAX;
	vector <int> a;
	a.resize (n+1);
	for (int j=0; j<N; j++)
	{
		save=0;
		np=n;
		for (int i=0; i<n; i++)
		{
			//cout<<"n: "<<np<<endl;
			p=(double)rand()/RAND_MAX;
			//cout<<"p is "<<p<<endl;
			//cout<<"pr is "<<probability<<endl;
			if (probability<=p)
			{
				np=np+1;
				//cout<<endl<<"+"<<endl;
				//cout<<" n: "<<np<<endl;
			}
			if (probability>p)
			{
				np=np-1;
				//cout<<endl<<"-"<<endl;
				//cout<<" n: "<<np<<endl;
			}
			save=np;
			//cout<<endl<< "save is "<<save<<endl;
		}
		save=save/2;
		//cout<<endl<< "save is "<<save<<endl;
		a[save]=a[save]+1;
	}
	for (int i=0;i<a.size();i++)
	{
		outFile<<a[i]<<endl;
	}
	_getch ();
	return 0;
}