# include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
  Node(int val){
    data=val;
    next=NULL;
  }
};
class List{
  Node* head;
  Node* tail;
  public:
  List(){
    head=NULL;
    tail=NULL;}
    void push_front(int val){  // when head points to null
      Node* newNode=new Node(val); // this creates a newnode that stires the value as data and next as address
      if(head==NULL){
        head=tail=newNode;  // if head is null then head and tail will point to newnode
      }
      else{
        newNode ->next=head; // next of new node will point to current head
        head=newNode;  // head now wil stire he address of newnode
      }
    }

    void push_back(int val){
      Node* newNode=new Node(val);
      if(head==NULL){
        head=tail=newNode;}
        else{
          tail->next=newNode;
          tail=newNode;
        }
      }

    void pop_front(){
      if(head==NULL){
        cout<<"list is empty"<<endl;}
        else{
          Node* temp=head;
          head=head->next;
          temp->next=NULL;
          delete temp;    
        }

    }

    void pop_back(){
      if (head == tail) { // this deals with edge case wen ther is only one lement  
       delete head;
      head = tail = nullptr;
      return;
}
      if(head==NULL){
        cout<<"list is empty"<<endl;
        return;
      }
      else{
        Node* temp=head;
        while(temp->next!=tail){
          temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
      }
    } 

void insertAtPosition(int position, int val)
{
    // Invalid position
    if(position <= 0)
    {
        cout << "Invalid Position\n";
        return;
    }

    // Insert at beginning
    if(position == 1)
    {
        push_front(val);
        return;
    }

    Node* temp = head;

    // Move to (position-1)th node
    for(int i = 1; i < position - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    // Position is beyond list length
    if(temp == NULL)
    {
        cout << "Invalid Position\n";
        return;
    }

    // Insert at end
    if(temp == tail)
    {
        push_back(val);
        return;
    }

    // Insert in middle
    Node* newNode = new Node(val);

    newNode->next = temp->next;
    temp->next = newNode;
}
    void printLL(){
      Node* temp =head;
      while(temp!=NULL){
        cout<<temp ->data<<" ";
        temp=temp->next;
      }
      cout<<"NULL"<<endl;
    }


};


int main(){
  List l;
  l.push_front(1);
  l.push_front(2);
  l.push_front(3);
  l.push_back(4);
  l.push_back(5);
  l.pop_front();
  l.printLL();
  l.pop_back();
  l.printLL();
  l.insertAtPosition(3, 25);
  l.printLL();

  return 0;
}