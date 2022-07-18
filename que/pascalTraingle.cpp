#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num=1;
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<num<<" ";
            num = num*(i-k)/(k+1);
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int k=i;k<n;k++){
            cout<<" ";
        }
        for(int j=0;j<=2*i;j++){
            cout<<"*";
        }
         
        cout<<endl;
    }
  
  for(int i = n; i >= 1; i--)
{
//for loop to put space
for(int s = i; s < n; s++)
cout << " ";
//for loop for displaying star
for(int j = 1; j <= (2 * i - 1); j++)
cout << "* ";
// ending line after each row
cout << "\n";
}


}