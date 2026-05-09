#include<iostream>
using namespace std;
int main(){
    int array[]={4,8,9,10,11};
    int size=sizeof(array)/sizeof(array[0]);
    int sum=0;
    for(int index=0;index<size;index++){
        sum+=array[index];
    } 
    cout<<"Sum of array is="<<sum<<endl;
    return 0;
}