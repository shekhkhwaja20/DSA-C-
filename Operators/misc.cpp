#include<iostream>
using namespace std;
int main()
{
    int a=5;
    cout<<sizeof(a)<<" ";
    
    cout<<endl;
   char name='A';
   cout<<sizeof(name)<<" ";

   bool flag;
   a==name? flag = true : flag=false; // this is called terninary operator it works as if else 
   cout<<flag<<endl;

   cout<<(&a)<<endl;

   return 0;

}