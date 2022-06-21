#include<iostream>
using namespace std;

void cyclicaly(int arr[], int n){
    int temp = arr[n-1];
    for(int i=n-1;i>0;i--){
       arr[i] = arr[i-1];
    }
    arr[0] = temp;
     for(int j=0;j<n;j++){
      cout<<arr[j];
      cout<<endl;
  }

}


int main(){
  int n;
  cout<<"Enter size of array:";
  cin>>n;
  int arr[n];
  cout<<"Enter the values in array :"<<endl;
  for(int i=0;i<n;i++){
      cin>>arr[i];
      
  }

  cyclicaly(arr,n);

   return 0;

}