#include<bits/stdc++.h>
using namespace std;
int main()
{
    try
    {
        int num1,num2;
        cout<<"Enter your 1st number:";
        cin>>num1;
        cout<<"Enter your 2nd number: ";
        cin>>num2;
        if(num2==0)
        {
            throw -1;
        }
        double result=(double) num1/num2;
        cout<<"Result : "<<result<<endl;
        
     
    }
    catch(...)
    {
        cout<<"Divide by zero is not possible";
    }
    
}