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
    int a,max=INT_MIN;
    vector <int> ar;
    cin>>a;
    ar.push_back (a);
    while (a!=1)
    {
        if (a%2 == 0)
        {
            a=a/2;
        }
        else
        {
            a=a*3+1;
        }
        ar.push_back (a);
    }
    a=0;
    for (int i=0; i<ar.size(); i++)
    {
        cout<< "number of elemt "<< i<<" is "<< ar[i]<<endl;
        a=ar[i];
        if (a>=max)
        {
            max=a;
        }
    }
    cout<<"size is "<<ar.size() << endl;
    a=0; 
    for (int i=0; i<ar.size(); i++)
    {
        a=ar[i]+a;
    }
    cout<<"answer is " <<a << endl<<"max is "<< max;
    _getch ();
    return 0;
}