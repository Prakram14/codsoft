#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the value of first number: "<<endl;
    cin>>a;
    cout<<"Enter the value of second number: "<<endl;
    cin>>b;
    cout<<"Enter the operation which you want to apply on the numbers"<<endl<<"1 for addition"<<endl<<
    "2 for subtraction"<<endl<<"3 for multiplication"<<endl<<"4 for division"<<endl;
    cin>>c;
    if(c==1)
    {
        cout<<"a+b= "<<a+b;
    }
    else if(c==2)
    {
        cout<<"a-b= "<<a-b;
    }
    else if(c==3)
    {
        cout<<"a*b= "<<a*b;
    }
    else if(c==4)
    {
        cout<<"a/b= "<<a/b;
    }
    else
    {
        cout<<"invalid input";
    }
    return 0;
}
