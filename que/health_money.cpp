#include<bits/stdc++.h>
using namespace std;

int maxLevel(int h,int m)
        {
            // code here
            int health[3] ={3,-5,-20};
            int money[3] = {2,-10,5};
            
            int maxl = 0;
             
             while(h>0 && m>0){
                  int ctr=0;
                 for(int i=0;i<3;i++){
                    if(h+health[i]>0 && m+money[i]>0){
                        h +=health[i];
                        m +=money[i];
                        maxl++;
                    }
                    else{continue;}
                     
                 }
                 if(ctr==1){
                     break;
                 }
             }
             return maxl;
        }
int main()
{
     int h,m;
     cin>>h>>m;
     cout<<"no of max levels : "<<maxLevel(h,m);

}