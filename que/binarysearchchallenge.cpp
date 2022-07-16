#include<bits/stdc++.h>
using namespace std;

int finfeas(int boards[],int n,int limit){
    int sum=0,painters=1;
    for(int i=0;i<n;i++){
        sum+=boards[i];
        if(sum>limit){
            sum = boards[i];
            painters++;
        }
    }
    return painters;
}

int painterpartition(int board[],int n, int m){
    int totall = 0,k=0;
     for(int i=0;i<n;i++)
     {
        k = max(k,board[i]);
        totall += board[i]; 
     }

     int low =k, high = totall;
     while(low<high){
        int mid  = (low + high)/2;
        int painters = finfeas(board,n,mid);
        if(painters<=m){
            high = mid;
        }else{
            low = mid+1;

        }
     }
     return low;
}
int main(){
 int ar[] = {10,20,30,40};
 int n=4;
 int m=2;
 cout<<" minimum time to paint boards : "<<painterpartition(ar,n,m)<<endl;

}