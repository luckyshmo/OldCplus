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
	//2. Вводятся два числа n и k. Затем над массивом натуральных чисел от 1 до n производится k раз операция обмена местами двух случайно выбранных элементов. Выведите в файл получишийся массив.
    int n,k,a,b,vr;
    vector <double> ar;
	cin>>n>>k;
	ofstream outFile("result.txt");
	srand(time(NULL));
	outFile<<"BEFORE"<<endl;
	for (int i=1,ch=0;i<n+1;i++,ch++)
	{
		a=i;
		ar.push_back (a);
		outFile<<"num in "<<ch<<" is "<<a<<endl;
	}
	outFile<<"AFTER "<<k<<" regrouping"<<endl;
	for (int i=0;i<k;i++)
	{
		a=rand()%(n);
		b=rand()%(n);
		vr=ar[a];
		ar[a]=ar[b];
		ar[b]=vr;
	}
	for (int ch=0;ch<n;ch++)
	{
		outFile<<"num in "<<ch<<" is "<<ar[ch]<<endl;
	}
    //_getch();
    return 0;
}