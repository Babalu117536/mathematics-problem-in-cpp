/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"enter two number";
    cin>>a>>b;
    while(a!=b)
    {
        if(a>b)
        a=a-b;
        else
        b=b-a;
    }
    cout<<"gcd of two no";
    cout<<a;
    
    return 0;
}
