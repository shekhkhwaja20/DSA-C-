#include<iostream>
using namespace std;
int main()
{
    int array[]={2,4,6,8,10};
    int size=sizeof(array)/sizeof(array[0]);
    int max=array[0];
    for(int index=1;index<size;index++){
        if(array[index]>max){
            max=array[index];
        
        }
        
    }
    cout<<"max element in array is="<<max<<endl;
}