#include<vector>
#include<iostream>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"size"<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;
    v.push_back(10);
    cout<<"size"<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;
    v.push_back(20);
    cout<<"size"<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;
    v.push_back(30);
    cout<<"size"<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;
    v.push_back(40);
    cout<<"size"<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;
    v.push_back(50);
    cout<<"size"<<v.size()<<endl;   
    cout<<"capacity"<<v.capacity()<<endl;
    v.push_back(60);
    cout<<"size"<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;
    v.resize(8);
    cout<<"size"<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;
    v.resize(10);
    cout<<"size"<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;
    v.pop_back();
    v.pop_back();
    cout<<"size"<<v.size()<<endl;   
    cout<<"capacity"<<v.capacity()<<endl;

}