#include<bits/stdc++.h>
 
 using namespace std;

class Graph{
    public:
       unordered_map<int, list<pair<int,int>>> adj;
        void addEdge(int u,int v,int weight){
            pair<int,int>  p = make_pair(v,weight);
            adj[u].push_back(p);
        }

        void printadj(){
            for(auto i: adj){
                cout<<i.first<<"-->";
                for(auto j: i.second){
                  cout<<"("<<j.first<<","<<j.second<<"),";
                }cout<<endl;
            }
        }
        void dfs(int node, unordered_map<int,bool> &vis,stack<int> &top){
           vis[node] = true;

           for(auto n: adj[node]){
            if(!vis[n.first]){
             g.dfs(n.first,vis,top);
                
            }
           } 

           top.push(n);
        }
   void getshortest(int src, vector<int> &dist,stack<int> &s){
   
    dist[src] = 0;
    while(!s.empty()){
     int top = s.top();
     s.pop();
      if(dist[top]!=INT_MAX){
        for(auro i: adj[top]){
            
        }
      }
    }
        }


};

 int main(){

  Graph g;
  g.addEdge(0,1,5);
  g.addEdge(0,2,3);
  g.addEdge(1,2,2);
  g.addEdge(1,3,6);
  g.addEdge(2,3,7);
  g.addEdge(2,4,4);
  g.addEdge(2,5,2);
  g.addEdge(3,4,-1);
  g.addEdge(4,5,-2);

  g.printadj();  

  //topological sort

   int n=6;
   unordered_map<int,bool>visited;
   stack<int>s; 
   for(int i=0;i<n;i++)
   {
    if(!visited[i]){
        dfs(i,visited,s);
    }
   }

   vector<int> dist(n);
    for(int i=0;i<n;i++){
        dist[i] = INT_MAX;
    }
 }