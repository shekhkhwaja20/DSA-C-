#include<iostream>
using namespace std;
int main(){
    int array[]={2,4,6,8,10,12,14,16,18,20};
    int size=sizeof(array)/sizeof(array[0]);
    int key=12;
    int ans=-1;
    for(int index=0;index<size;index++){
        if(array[index]==key){
            ans=index;
            break;
             
        }
        
    }
        
   cout<<ans<<endl;

}