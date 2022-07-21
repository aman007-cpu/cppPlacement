#include<bits/stdc++.h>
using namespace std;
class heapp{
public:
     int arr[100];
      int size;
     heapp(){
        arr[0] = -1;
         size =0;

     }
     void insert(int val){
         int size = size + 1;
         int index = size; 
         arr[index] = val;
         while(index > 1){
            int parent = index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return;
            }
         }
     }
     void print(){
         for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
         }cout<<endl;
     }

     void deletefromheap(){
        if(size==0){
            cout<<"nothing to delete";
            return;
        }
        arr[1] = arr[size];
        size--;

        //take root nodes to itscorrect position
        int i=1;
        while(i<size){
              int leftind = 2*i;
              int rightind = 2*i +1;
              if(leftind<size && arr[i]<arr[leftind]){
                swap(arr[i],arr[leftind]);
                i=leftind;
              }
              else if(rightind<size && arr[i]<arr[rightind]){
                swap(arr[i],arr[rightind]);
                i = rightind;
              }

              else{
                return;
              }
        }
     }

};
  void heapify(int arr[],int n, int i){
        int largest = i;
        int left = 2*i;
        int right =2*i + 1;
        if(left<=n && arr[left]>arr[largest]){
             largest = left;
        }

        if(right<=n && arr[right]>arr[largest]){
             largest = right;
        }

        if(largest!=i){
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }
     }



  void heapsort(int arr[], int n){

    int size=n;
    while(size>1){
        //step1: swap
        swap(arr[1],arr[size]);
        //step 2:
        size--;
        heapify(arr,size,1);
    }
  }

int main(){
  heapp h;
//   h.insert(50);
//   h.insert(55);
//   h.insert(53);
//   h.insert(52);
//   h.insert(54);
//   h.print();
//   h.deletefromheap();
//    h.print();

  int ar[6] = {-1,54,53,55,52,50};
  int n = 5;
  for(int i=n/2;i>0;i--){
    heapify(ar,n,i);
  }

  cout<<"printing arrays: "<<endl;
  for(int i=1;i<=n;i++){
    cout<<ar[i]<<" ";
  }cout<<endl;

  //heapsort

  heapsort(ar,n);
  for(int i=1;i<=n;i++){
    cout<<ar[i]<<" ";
  }

  cout<<"Using priority queue"<<endl;
  //max heap hota hai
  priority_queue<int> pq;
  pq.push(4);
  pq.push(2);
  pq.push(6);
  pq.push(1);
  cout<<"maximum element : "<<pq.top();


  //for making minheap
  priority_queue<int, vector<int> , greater<int>> minh;
  minh.push(4);
  minh.push(2);
  minh.push(6);
  minh.push(1);
  cout<<"maximum element : "<<minh.top();


  return 0;
}