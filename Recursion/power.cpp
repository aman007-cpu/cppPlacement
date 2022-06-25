#include<iostream>
using namespace std;
int power(int n,int p){
    if(p==0){
        return 1;
    }
int prepow = power(n,p-1);
 return n*prepow;
}
int main(){
    cout<<power(3,4);
    return 0;

}