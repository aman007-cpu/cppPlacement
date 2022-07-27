#include<bits/stdc++.h>

using namespace std;

int main(){
 
 vector<vector<int>> grid;
cout<<"enter the grid matrix"<<endl;
 for(int i=0;i<3;i++){
    vector<int> num;
    for(int j=0;j<3;j++)
    {
         int x;
         cin>>x;
         num.push_back(x);
    }
     grid.push_back(num);
   
 }
map<vector<int>, int> mp;
 cout<<"Show grid : "<<endl;

for(int i=0;i<grid.size();i++)
    {
        mp[grid[i]]++;
     
   } 

}