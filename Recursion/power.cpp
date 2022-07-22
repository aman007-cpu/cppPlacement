#include<iostream>
using namespace std;
//this will take n iterations to solve 
   // eg: 2^1024 will take 1024 iterations
// int power(int n,int p){
//     if(p==0){
//         return 1;
//     }
// int prepow = power(n,p-1);
//  return n*prepow;
// }


//optimize code
int pow(int a,int b){
    if(b==0)return 1;
    if(b==1) return a;
    int ans = pow(a,b/2);
    //if b is even
    if(b%2==0){
        return ans*ans;
    }
    //if b is odd
    else{
        return a*ans*ans;
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    // cout<<power(a,b);
    int ans  = pow(a,b);
    cout<<"Answer is  :"<<ans;
    return 0;

}