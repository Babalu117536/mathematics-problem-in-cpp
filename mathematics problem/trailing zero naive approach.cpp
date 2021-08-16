/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,r=0;
    long fact=1;
    cout<<"enter a number";
cin>>n;
for(int i=2;i<=n;i++)
fact*=i;
while(fact>0)
{
    if(fact%10==0)
    r++;
    fact=fact/10;
}
cout<<r;
    return 0;
}
