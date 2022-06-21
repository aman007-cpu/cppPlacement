#include<iostream>

using namespace std;

int main(){
  int n;
  cin>>n;
  int ar[n];
  for(int i=0;i<n;i++){
      cin>>ar[i];
  }
   int pd=2;
   int curr=2;
   int ans=2;
   int j=2;
   while(j<n){
       if(pd== ar[j]-ar[j-1])
        {
            curr++;
        }else{
            pd = ar[j] - ar[j-1];
            curr=2;
        }
        ans = max(ans,curr);
        j++;
   }
  
cout<<ans;
 return 0;

}