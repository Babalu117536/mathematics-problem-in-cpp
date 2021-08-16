/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int main()
{
int n,count=0;
cout<<"enter a no";
cin>>n;
while(n>0)
{
    count++;
    n=n/10;
}
cout<<count;
    return 0;
}
