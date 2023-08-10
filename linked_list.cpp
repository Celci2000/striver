#include<iostream>
using namespace std;
class Node{
    public :
    int key;
    int data;
    Node*next;
    Node(){
   key=0;
   data=0;
   next=NULL;
}
   Node(int k , int d){
    key=k;
    data=d;

   }
 
};
class SinglyLinkedList{
public:
Node*head;
SinglyLinkedList(){
    head=NULL; 
}
SinglyLinkedList(Node*n){
    head=n;
}

Node *nodeExists(int k){
     Node*temp=NULL;
    Node*ptr= head;

while(ptr!=NULL){
    if(ptr->key==k){
        temp=ptr;
    }
    ptr=ptr->next;
}
return temp;
 }
 void appendNode(Node*n ,int  data, int key ){
   Node*temp=head;

   if(nodeExists(key)!=NULL){
    cout<<"node key already exists";
   }
   else{
    while(temp!=NULL){
        temp=temp->next;
    }
    temp=n;
   }

 }
void print(){
    if(head==NULL){
        cout<<"no nodes in list";

    }
    else{
        cout<<"singly liked list values: "<<endl;
        Node*temp=head;
        while(temp!=NULL){
            cout<<"("<<temp->key<<","<<temp->data<<")->";
            temp=temp->next;
        
        }   
        }
}

};
int main(){
   
    Node*n1=new Node();
    SinglyLinkedList s;
    s.head=n1;
    cout<<"to append"<<endl;
    cout<<"enter the data that is to be appended:"<<endl;
    cin>>n1->data;
    cout<<"enter the key of data to be appended:"<<endl;
    cin>>n1->key;
    n1->next=NULL;

   s.appendNode(n1,n1->data,n1->key);
  s.print();
    return 0;
}

