#include<iostream>
using namespace std;

bool issafe(int** ar, int x,int y,int n){
    for(int row=0;row<x;row++){
      if(ar[row][x]==1){
        return false;
      }
    }

   int row = x;
   int col = y;
   while(row>=0 && col>=0){
       if(ar[row][col]==1){
        return false;
       }

       row--;
       col--;
   }
   
   row = x;
    col = y;
   while(row>=0 && col<n){
       if(ar[row][col]==1){
        return false;
       }

       row--;
       col++;
   }

   return true;
}
bool nqueen(int** arr, int x,int n){
    if(x>=n){
        return true;
    }

    for(int col=0;col<n;col++){
        if(issafe(arr,x,col,n)){
            arr[x][col]=1;

            if(nqueen(arr,x+1,n)){
                return true;
            }
            arr[x][col]=0; // backtraking
        }
    }
    return false;
}

int main(){
   int n;
   cin>>n;
   int** ar = new int*[n];
   for(int i=0;i<n;i++){
    ar[i] = new int[n];
    for(int j=0;j<n;j++){
        ar[i][j]=0;
    }
   }
   if(nqueen(ar,0,n)){
    for(int i=0;i<n;i++){
   
    for(int j=0;j<n;j++){
       cout<<ar[i][j]<<" ";
    }
    cout<<endl;
   }
   }
    return 0;
}