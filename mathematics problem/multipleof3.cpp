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
    count+=n%10;
    n=n/10;
} if(count%3==0)
cout<<"multiple of 3";
else
cout<<"not multiple of 3";
    return 0;
}
