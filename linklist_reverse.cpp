#include<iostream>
using namespace std;
class Node
{
public:
	int data;
	Node* next;
};
void Print_linklist(Node* head){
 Node* temp=head;
 while(temp!=NULL){
   cout<<temp->data<<" ";
   temp=temp->next;
 } 
 cout<<"Null"<<endl;

}
void AddElementAtBegin(Node* &head,int value){
  //we use a refrence variable for modify the node !
  Node* newlink=new Node();
  newlink->data=value;
  newlink->next=head;
  head=newlink;
}
void ReverseLinklist(Node* &head)
 {
    Node* prveptr=NULL;
    Node* currentptr=head;
    Node* nextptr=NULL;
    while(currentptr!=NULL){
    nextptr=currentptr->next;
    currentptr->next=prveptr;
    prveptr=currentptr;
    currentptr=nextptr;
}

head=prveptr;
}
int main(){
Node* head=new Node();
Node* tail=new Node();
head->data=5;
head->next=tail;
tail->data=10;
tail->next=NULL;
Print_linklist(head);
Print_linklist(head);
cout<<endl;
cout<<endl;
AddElementAtBegin(head,15);
AddElementAtBegin(head,20);
AddElementAtBegin(head,25);
Print_linklist(head);
cout<<endl;
ReverseLinklist(head);
Print_linklist(head);
cout<<endl;
}