#include <iostream>
#include <conio.h>
#include <math.h>
#include <climits>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <limits.h>
#include <stdio.h>
using namespace std;
int main()
{
    int len, beg, i=0, counter=0;
	double min=LLONG_MAX, max=LLONG_MIN;
    cout<<"Enter length: ";
    cin>>len;
    ifstream inF ("input.txt");
    vector <double> ar;
    for (int i=0; i<len; i++)
    {
        int in;
        inF>>in;
        ar.push_back(in);
        //cout<<ar[i]<<endl;
    }
    cout<<endl;
    do
    {
        if (ar[i]<ar[i+1])
        {
            beg = i;
            for (;i<len-1 && ar[i]< ar[i+1]; i++)
            {
                //cout<<ar[i]<<endl;
            }
            cout<<"beg is "<<ar[beg]<<", end is "<<ar[i]<<endl;
            counter++;
            if (i==len-1) break;
        }
        if (ar[i]>ar[i+1])
        {
            //cout<<"i:"<<i<<endl;
            beg = i;
            for (; i<len-1 && ar[i]> ar[i+1]; i++)
            {
                //cout<<ar[i]<<"-2"<<endl;
            }
            cout<<"beg is "<<ar[beg]<<", end is "<<ar[i]<<endl;
            counter++;
            if (i==len-1) break;
        }
        if (ar[i]==ar[i+1])
        {
            i++;
        }
        //cout<<"i:"<<i<<endl;
    } while(i<len-1);
    cout<<"number of extermums: "<<counter+1;
    _getch();
    return 0;
}