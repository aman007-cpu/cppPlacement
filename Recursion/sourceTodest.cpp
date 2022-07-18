#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,bool> mp;


bool isvisited(int a,int b,int m,int n){
    if(a>=0&&a<m&&b>=0&&b<n&&mp[make_pair(a,b)]==false){
        return true;
    }

    return false;
}

void printways(int m,int n, int srcx,int srcy,int dstx,int dsty,string str){
        mp[make_pair(srcx,srcy)]=true;

        //base condition 
        if(srcx==dstx&&srcy==dsty){
            cout<<str<<" "<<endl;
             mp[make_pair(srcx,srcy)]=false;
            return;
        }

        //right

        if(isvisited(srcx+1,srcy,m,n)){
            str.push_back('R');
            printways(m,n,srcx+1,srcy,dstx,dsty,str);
            str.pop_back();
        }

        //up
        if(isvisited(srcx,srcy+1,m,n)){
            str.push_back('U');
            printways(m,n,srcx,srcy+1,dstx,dsty,str);
            str.pop_back();
        }

        mp[make_pair(srcx,srcy)]=false;

}

int main(){
    int m,n;
    cout<<"enter m  and n of the mxn Matrix: ";
    cin>>m>>n;

    int src_x,src_y,dst_x,dst_y;
    cout<<"\n Enter source destination address: ";
    cin>>src_x>>src_y;
    cout<<"\n Enter Destination address: ";
    cin>>dst_x>>dst_y;
    string output="";

    printways(m,n,src_x,src_y,dst_x,dst_y,output);
}