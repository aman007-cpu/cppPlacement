#include<iostream>
#include<set>
using namespace std;

class Person{

    public:
      float age;
      string name;
      bool operator<(const Person& rhs) const{return age<rhs.age;}
};


int main(){
  set<Person> set = {{25,"Aman"},{21,"Lokesh"}};
  for(auto &i: set){
    cout<<i.age<<" "<<i.name<<endl;
  }


    return 0;
}