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
    cin>>n;
    while(n>0)
    {
        r=r+n/5;
        n=n/5;
    }
cout<<r;
    return 0;
}
