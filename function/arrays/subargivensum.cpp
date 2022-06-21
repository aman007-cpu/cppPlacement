#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int s;
    cin>>s;
    int ar[n];
for(int i=0;i<n;i++){
    cin>>ar[n];
}
int i=0 , j=0 , st=-1,en=-1 , sum=0;
while(j<n && sum+ar[j]<=s){
    sum += ar[j];
    j++;
}
if(sum==s){
    cout<< i+1<<" "<<j<<endl;
    return 0;
}

while (j<n)
{
    sum+=ar[j];
     while(sum>s){
         sum -=ar[i];
         i++;
     }
    if(sum==s){
        st = i+1;
        en = j+1;
        break;
    }

    j++;

}
cout<<st<<" "<<en<<endl;



}