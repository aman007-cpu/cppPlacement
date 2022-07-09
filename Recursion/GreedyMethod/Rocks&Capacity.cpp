#include<bits/stdc++.h>
using namespace std;
 int maximumBags(vector<int> &capacity, vector<int> &rocks, int additionalRocks) {
          for(int i = 0; i < capacity.size(); i++) 
          {capacity[i] -= rocks[i];}
        int cnt = 0;
        sort(capacity.begin(), capacity.end());
        for(int i = 0; i < capacity.size(); i++){
            if(capacity[i] == 0)  cnt++;
            else if(capacity[i] <= additionalRocks) cnt++, additionalRocks -= capacity[i];
            else break; 
        }
        
        return cnt;
    }

int main(){
    int n;
    cin>>n;
    vector<int> capacity(n);
    vector<int> rocks(n);
    int addrocks;
    cin>>addrocks;
    int a,b;

  for(int i=0 ; i<n ; i++)
    {
        cin>>a;
        capacity.push_back(a);
    }
     for(int i=0 ; i<n ; i++)
    {
        cin>>b;
        rocks.push_back(b);
    }

    cout<<maximumBag(capacity,rocks,addrocks);


}