#include<iostream>
using namespace std;
int main()
{
    //for loop
    //  char vowels[5];
    //  for(int idx=0;idx<5;idx++){
    //     cin>>vowels[idx];

    //  }
    //  for(int idx=0;idx<5;idx++){
    //     cout<<vowels[idx]<<" ";
    //  }
    // for each loop 
    char vowels[5];
    for(char &element:vowels){
        cin>>element;
    }
    for(char element:vowels){
        cout<<element<<" ";
    }
}