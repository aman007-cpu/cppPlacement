#include<bits/stdc++.h>
using namespace std;

int main(){
//   int a=4;
//   int b=6;
//   cout<<(a&b)<<endl;
//   cout<<(a|b)<<endl;
//   cout<<(a^b)<<endl;
// //   cout<<(~a)<<endl;
  // cout<<(3>>2)<<endl;
//   cout<<(2>>6)<<endl;
//   cout<<(5<<1)<<endl;
//    cout<<(5<<2)<<endl;
//     cout<<(5<<3)<<endl;
// cout<<(0<<1)<<endl;
 int arr[5] = {3 , 4 , 2 , 5 , 1};

  long long sum =0;
    
    for(int i=0;i<5;i++){
         if(arr[i] != 1 && arr[i]!=3){
         if(arr[i]%2 !=0 || arr[i]%3==0){
            arr[i]  = (arr[i]>>2);
          }
        }
        if(arr[i] == 3){
          arr[i] = 1;
        }
        cout<<arr[i]<<endl;
        sum += arr[i];
    }
    cout<<sum;

}