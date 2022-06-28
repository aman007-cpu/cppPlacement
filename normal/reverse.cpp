#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<endl;
    int reverse=0;
    while(n>0){
       int lastdigit = n%10;
       reverse = reverse*10 + lastdigit;
       n= n/10; 

    }

    cout<<"REVERSE NUMBER :"<<reverse;
    return 0;
}