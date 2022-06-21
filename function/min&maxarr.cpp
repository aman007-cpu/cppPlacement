// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void sort(int ar[], int n){
    int temp=0;
   for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
           if(ar[i]>ar[j]){
                temp = ar[i];
               ar[i] = ar[j];
               ar[j] = temp;
           }
       }
   }
}

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar,n);
     cout<<endl;
    cout<<"MAX ELEMENT : "<<ar[n-1];
    cout<<endl;
    cout<<"Min ELEMENT : "<<ar[0];

    return 0;

}