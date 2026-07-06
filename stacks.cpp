#include<iostream>                                                                                  
#include<vector>
using namespace std;

class Stack{
  vector<int> v;                                             
  public:
  void push(int val){
    v.push_back(val);
  }
  int top(){
    return v[v.size()-1];
  }
  void pop(){
    v.pop_back();
  }
  bool empty(){
    return v.size()==0;
  }
  

};
int main(){
  Stack s;
  s.push(10);
  s.push(20);
  s.push(30);
  while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
}
cout<<endl;
  s.top();
  s.pop();


  return 0;
}

/* using linked list concept
#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Stack{
  list <int>ll;
  public:
  void push(int val){
    ll.push_front(val);
  }
  int top(){
    return ll.front();
  }
  void pop(){
    ll.pop_front();
  }
  bool empty(){
    return ll.size()==0;
  }
  

};
int main(){
  Stack s;
  s.push(10);
  s.push(20);
  s.push(30);
  while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
}
cout<<endl;
  s.top();
  s.pop();


  return 0;
}
*/