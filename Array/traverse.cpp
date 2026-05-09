#include<iostream>
using namespace std;
int main(){
    // for loop
    int array[4]={2,4,6,8};
    // for(int idx=0;idx<4;idx++){
    //     cout<<array[idx]<<" ";
    // }
    // for each loop
    // for(int element:array){
    //     cout<<element<<" ";
    // }
    //while loop
    int index=0;
    while(index<4){
        cout<<array[index]<<" ";
        index++;
    }
}