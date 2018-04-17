#include<iostream>
using namespace std;
int multiply(int m,int n)
{
    try{
    if(m==0||n==0)
    throw 0;
    else 
    return m*n;
    }
    catch(int x)
    {
        cout<<"Error Spotted..\n EITHER OF NUM'S CAN'T BE ZERO"<<endl;
    }
}
int main()
{
    int m,n;
    cout<<"Enter two numbers to Multiply"<<endl;
    cin>>m>>n;
    cout<<multiply(m,n);
    return 0;
}