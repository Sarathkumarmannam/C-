#include<iostream>
#include<cstring>
using namespace std;
class xcept
{
    public:
    char text[25];
    int x;
    xcept()
    {
        *text=0;
        x=0;
    }    
    xcept(const char* str,int k)
    {
        strcpy(text,str);
        x=k;
    }
}; 

int main()
{
    int p;
    cout<<"Enter a positive integer"<<endl;
    cin>>p;
    try{
        if(p<0)
        throw xcept("Negative Integer",p);
        cout<<"Input is valid";
    }
    catch(xcept ob1)
    {
        cout<<"Input is invalid because of"<<ob1.text<<ob1.x<<endl;
        
    }
    /*int x=3,y=5,z=7,a,b;
    a=x*2+y/5-z*y;
    b=++x*(y-3)/2-z++*
    y;
    cout<<a<<b;*/
    return 0;
}