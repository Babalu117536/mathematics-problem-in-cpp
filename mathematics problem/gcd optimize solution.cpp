/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int gcd(int x,int y)
{
    if(y==0)
    return x;
    else
    return(y,y%x);
}
int main()
{
    int a,b;
    cout<<"enter two number";
    cin>>a>>b;
    
    cout<<gcd(a,b);
    return 0;
}
