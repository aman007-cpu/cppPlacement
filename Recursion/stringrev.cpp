#include<bits/stdc++.h>
using namespace std;
 
//   void strinreverse(int i,int j,string &str){
//    if(i>j) return;
//     swap(str[i],str[j]);
//     i++;
//     j--;
//     return strinreverse(i,j,str);
//  }

   void strinreverse(int i,int j,string &str){
   if(i>j) return;
    swap(str[i],str[j]);
    i++;
    j--;
    return strinreverse(i,j,str);
 }
int main(){
    string str = "naman";
     string ans  = str;
    // reverse(str.begin(),str.end());
   strinreverse(0,4,str);
   if(ans==str){
    cout<<"Palindrome";
   }
   else{cout<<"not";}
  
}