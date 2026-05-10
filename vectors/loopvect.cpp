#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(7);
    // for loop
    // for(int index=0;index<5;index++)
    // {
    //     int element;
    //     cin>>element;
    //     v.push_back(element);
    // }
    // for(int index=0;index<v.size();index++)
    // {
    //     cout<<v[index]<<" ";
    // }
    // cout<<endl;
// for each loop
//   for(int &element:v)
//   {
//       cin>>element;
      
//   }
//    for(int element:v)
//   {
//       cout<<element<<"";
      
//   }
  int index=0;
  while(index<v.size())
  {
    cin>>v[index];
    index++;
  }
     index=0;
  while(index<v.size())
  {
    cout<<v[index]<<" ";
    index++;
  }
}