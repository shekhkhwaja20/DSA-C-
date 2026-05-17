#include<iostream>
using namespace std;
int main()
{ 
    // arithmetic operators
    int num1=5,num2=6;
    cout<<"result="<<num1+num2<<endl;
    cout<<"result="<<num1-num2<<endl;
    cout<<"result="<<num1*num2<<endl;
    cout<<"result="<<num1/num2<<endl;
    cout<<"result="<<num1%num2<<endl;
    //relational operators
    cout<<(num1==num2)<<" "; // false
    cout<<(num1!=num2)<<" ";// true 
    cout<<(num1>=num2)<<" ";//false
    //logical operators
    bool exp1=true,exp2=false;
    cout<<(exp1&&exp2)<<" ";
    cout<<(exp1||exp2)<<" ";
    cout<<(!exp1)<<" ";  
    cout<<endl;  
    // Assignment operators
    int a=5;
     cout<<(a+=5)<<" ";
     cout<<(a-=5)<<" ";
     cout<<(a*=5)<<" ";
     cout<<(a/=5)<<" ";
     cout<<(a%=5)<<" ";

}
