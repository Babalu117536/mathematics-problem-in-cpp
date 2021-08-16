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
int temp=n;
while(n>0)
{
    count=count*10+n%10;
    n=n/10;
}
if(count==temp)
cout<<"palindrome";
else
cout<<"not pallindrome";
    return 0;
}
