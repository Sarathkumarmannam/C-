//throwing an exception from function outside try block..
#include<iostream>
using namespace std;
int sum(int a,int b)
{
    if (a+b==0)
        throw 0;    
    else
    return a+b;
}
int main()
{
    int a,b;
    cout<<"Enter Two Numbers"<<endl;
    cin>>a>>b;
    try{
        int k=sum(a,b);
        cout<<"Sum is "<<k;
        }
    catch(int m)
    {
        cout<<"Sum Has Become XERO..Please remember"<<endl;
    }
    
}