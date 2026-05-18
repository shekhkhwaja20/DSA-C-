#include<iostream>
using namespace std;
int main()
{
    int score;
    cin>>score;
    if(score>80){
        cout<<"Well done!"<<endl;
    }
    else if(score>=50 && score<=80)
    {
        cout<<"Can imporve!"<<endl;
    }
    else{
        cout<<"Poor performance"<<endl;
    }
}