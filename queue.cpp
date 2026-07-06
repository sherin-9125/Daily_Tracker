#include<iostream>
using namespace std;
// implementation using linked list
class Node{
  public:
  int data;
  Node* next;
  Node(int val){
    data=val;
    next=NULL;
  }
};
class Queue{
  Node* head;
  Node* tail;
  public:
  Queue(){
    head=tail=NULL;

  }
  void push(int val){
    Node* newNode = new Node(val);
    if(head==NULL){
      head=tail=newNode;

    }
    else{
      tail->next=newNode;
      tail=newNode;
    }
  }
  void pop(){
    if(head==NULL){
      cout<<"Queue is empty"<<endl;
    }
    else{
      Node* temp = head;
      head=head->next;
      delete temp;
    }

  }
  void front(){
    if(head==NULL){
      cout<<"Queue is empty"<<endl;
    }
    else{
      cout<<head->data<<endl;
    }
  }
  bool isempty(){
    return head==NULL;
  }
  
};
int main(){
  Queue q;
  q.push(5);
  q.push(10);
  q.push(15);
  q.front();
  q.pop();
  while(!q.isempty()){
    q.front();
    q.pop();
  }
  return 1;

}