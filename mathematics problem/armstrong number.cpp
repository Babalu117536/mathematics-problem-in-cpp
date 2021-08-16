/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int main()
{
int n,t=0,r;
cout<<"enter a no";
cin>>n;
int temp=n;
while(n>0)
{
    r=n%10;
    t+=r*r*r;
    n=n/10;
}
if(t==temp)
cout<<"armstrong";
else
cout<<"not armstrong";
    return 0;
}
