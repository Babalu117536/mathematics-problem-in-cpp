/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int multipleof3(int n)
{
    if(n<0)
    n=-n;
    if(n==0)
    return 1;
    if(n==1)
    return 0;
    int c1=0,c2=0;
    while(n>0)
    {
        if(n&1)
        {
            c1++;
        } 
        if(n&2)
        c2++;
        n=n>>2;
    }
    return multipleof3(abs(c1-c2));
}

int main()
{
    int n,count=0;
    cout<<"enter a no";
cin>>n;
if(multipleof3(n))
cout<<"multiple of 3";
else
cout<<"not multiple of 3";
    return 0;
}
