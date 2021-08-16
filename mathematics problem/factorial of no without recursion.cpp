/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int main()
{
int n,fact=1;
cout<<"enter a number";
cin>>n;
for(int i=2;i<=n;i++)
{
    fact*=i;
}
cout<<"factorial of number";
cout<<fact;
return 0;
}
