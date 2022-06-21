#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t=0;
	int N;
	cin>>t;
	while(t>0){
		cin>>N;
		int ar[N];
		ar[1]=1;
		ar[2]=6;
	  for(int i=3;i<=N;i++){
		  ar[i] = ((ar[i-1]+2)*2 - ar[i-2]);
	  }	
	  cout<<ar[N];
	  t--;
	}
	return 0;
}
