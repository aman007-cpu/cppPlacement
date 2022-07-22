#include<iostream>
using namespace std;
void merge(int *arr,int s,int e){
    int mid = (s+e)/2;
     int len1 = mid - s + 1;
     int len2=  e - mid;
     int *first = new int[len1];
     int *second = new int[len2];

     //copy values;
     int k = s;
     for(int i=0;i<len1;i++){
        cin>>first[k++];
     }

     k = mid + 1;
      for(int i=0;i<len2;i++){
        cin>>second[k++];
     }
     //merge 2 sorted arrays

     int ind1=0;
     int ind2 = 0;
     k = s;
     while(ind1<len1 && ind2<len2){
        if(first[ind1]<second[ind2]){
            arr[k++]  = first[ind1];
        }
        else{
             arr[k++] = second[ind2];
        }
     }


     while(ind1<len1){
         arr[k++]  = first[ind1];
     }
      while(ind2<len2){
         arr[k++]  = second[ind2];
     }

}


void mergeSort(int *arr,int s,int e){
   if(s>=e) {return;}
  
   int mid = (s+e)/2;
   //left wala
   mergeSort(arr,s,mid);
   //right wqala
   mergeSort(arr,mid+1,e);
   //merge these two sorted arrays

   merge(arr,s,e);
}

int main(){

    int arr[] = {5,1,3,6,12,2};
    int n = 6;

    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}