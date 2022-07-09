#include<bits/stdc++.h>
using namespace  std;

void printbinary(int num){
    for(int i=10;i>=0;i--){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}

int main(){
// for(int i=0;i<8;i++){
//     printbinary(i);
//     if(i&1){
//         cout<<"ODD\n";
//     }else{cout<<"EVEn\n";}
// int n=5;
// cout<<(n>>1);
// cout<<(n<<1);
char A = 'A';
char a= A|(1<<5);
cout<<a<<endl;
cout<<char(a&(~(1<<5)))<<endl;
 //uppercase to lowercase
cout<<char('C' | ' ')<<endl;
//lowercase to uppercase
cout<<char('d' & '_')<<endl;





}