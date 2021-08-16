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
if(n==2 || n==3)
cout<<"prime no";
if(n%2==0 ||n%3==0)
cout<<"not prime";
for(int i=5;i*i<=n;i+=6)
{
    if(n%i==0 ||n%(i+2)==0)
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
