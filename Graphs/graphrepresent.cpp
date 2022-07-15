#include<bits/stdc++.h>
using namespace  std;
const N = 1e3 + 10;
 int graph1[N][N];
 vector<pair<int,int>> graph2[N];
int main(){

    //adjacency matrix & adjaceny matrix for Graph

    // N = vertices & m = Edges
    // 1-2
    // 3-1
    // 1-9 this is connection of vertices 

    int n,m;
    cin>>n>>m;

   
    for(int i=0;i<m;i++){
        int v1,v2;
        cin>>v1>>v2,wt;
        graph1[v1][v2] =wt;
        graph1[v2][v1] = wt;
         graph2[v1].push_back({v2,wt});
         graph2[v2].push_back({v1,wt});

    }
}