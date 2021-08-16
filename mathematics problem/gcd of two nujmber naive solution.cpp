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
    res=min(a,b);
    while(res>0)
    {
        if(a%res==0 &&b%res==0)
        break;
        res--;
    }
    cout<<res;
    return 0;
}
