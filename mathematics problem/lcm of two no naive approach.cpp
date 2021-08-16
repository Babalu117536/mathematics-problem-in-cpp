/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a,b,res;
    cout<<"enter two number";
    cin>>a>>b;
    res=max(a,b);
    while(res>0)
    {
        if(res%a==0 && res%b==0)
        break;
        res++;
    }
    cout<<"lcm of two no";
    cout<<res;
    
    return 0;
}
