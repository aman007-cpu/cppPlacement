#include<iostream>
#include<cmath>
using namespace std;

int main(){
   int flag=0;
    int n;
    cin>>n;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            cout<<"NOT PRIME"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"PRIME";
    }
    return 0;
}