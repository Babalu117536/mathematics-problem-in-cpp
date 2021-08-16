/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main(){
    
int n,f=0;
cout<<"enter no";
cin>>n;
if(n==1)
cout<<"not prime";
for(int i=2;i*i<=n;i++)
{
    if(n%i==0)
    {
        f=1;
        break;
    }
}
if(f==0)
cout<<"prime no";
else
cout<<"not prime";
    
    return 0;
}
