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
	//a, b, n, S (n >= 2, a*n <= S <= b*n). —генерировать и вывести в файл массив случайных чисел из диапазона [a,b] так, чтобы их сумма равн€лась S.
    int a,b,s,len,g=0,v=0;
    vector <double> ar;
	cout<<"input a & b: ";
    cin>>a>>b;
	cout<<"input s & len: ";
	cin>>s>>len;
	ofstream outFile("result.txt");
  	ar.resize (len);
	for (int i=0;i<len;i++)
	{
		ar[i]=((double)rand()/RAND_MAX)*(b-a)+a;
		//ar[i]=rand();
		//cout<<ar[i]<<endl;
	}
	for (int i=0, c=0;i<len;c++,g++)
	{
		//cout<<"i:"<<i<<" c:"<<c<<" s:"<<s<<endl;
		//_getch();
		if (s==ar[i]+ar[c])
		{
			outFile<< ar[i]<< " "<<ar[c]<<endl;
			v++;
		}
		if (g==len-2)
		{
			c=0;g=0;i++;  
		}
	}
	outFile<<v;
    _getch();
    return 0;
}