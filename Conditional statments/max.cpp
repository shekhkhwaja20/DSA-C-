#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    if(num1>num2 && num1>num3)
    {
     cout<<"yeah wala bada hai="<<num1;
    }
    else if(num2>num1 && num2>num3)
    {
        cout<<"yeah wala bada hai="<<num2;
    }
    else{
        cout<<"yeah wala bada hai="<<num3;
    }
}