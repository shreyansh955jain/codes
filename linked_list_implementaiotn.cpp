//hey guy's this is linklist implementation@!....
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node{
public:
   int value;
   Node* next;  
};
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
void Print_LinkList(Node* node){
    while((node->next)!=NULL){
       cout<<node->value<<" > ";
       node=node->next;// storing next link address !!
    }
    cout<<node->value<<" > ";
    cout<<"Null"<<endl;
   }

//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

   void AddElementAtEnd(Node* &node,int data){
    Node* newlink=new Node();
    newlink->value=data;
    newlink->next=NULL;
    Node* temp=node;
    while(temp->next!=NULL){
       temp=temp->next;// storing next link address !!
    }
     temp->next=newlink;
     
   } 
//::::::::::::::::::::::::::::::::::::::::::::::::::::::
void AddElementAtBegning(Node* &head,int data)
{
    Node* newlink=new Node();
    newlink->value=data;
    newlink->next=head;
    head=newlink;//now my head is pointing to intial node!!.

}
//*******************************************************

void AddElementAtBetween(Node* &head,int data,int nodenumber){
    int i=1;//   nodenumber(1)->nodenumber(2)->nodenumber(3)....
    Node* newlink=new Node();
    newlink->value=data;
    Node* temp=head;
    Node* temp1=head;
    temp1=temp1->next;
    while(i!=nodenumber){
       temp=temp->next;// storing next link address !!
       temp1=temp1->next;
       i++;
    }
    temp->next=newlink;
    newlink->next=temp1;
}

//-----------------------------------------------------

void deleteFromBegning(Node* &head){
  Node* todelete=head;
  head=head->next;
  delete todelete;
}

//++++++++++++++++++++++++++++++++++++++++++++++++++   ++

void deletation(Node* &head,int key){
//.............want to delete nodenumber!!........
   Node* temp=head;
    //exception cases or corner cases.
    //if no node present in linklist!
    if (head==NULL)
    {
       return;
    }

    //temp->next==key 
    //single node only present in linklist.
    if (temp->next==NULL)
    {
       deleteFromBegning(head);
       return;
    }
    while(temp->next->value!=key){
       temp=temp->next;
       // storing next link address !!    
    }
     Node* todelete=temp->next;
     temp->next=temp->next->next; 
 //  free the memory is must otherwise leak that memory!!.
     delete todelete; //this line is free that memory  
}

int main(){

Node* head =new Node();
Node* first=new Node();
Node* second=new Node();
Node* tail=new Node();

head->value=5;
head->next=first;
first->value=7;
first->next=second;
second->value=10;
second->next=tail;
tail->value=6;
tail->next=NULL;
cout<<"Print LinkList"<<endl;
cout<<endl;
Print_LinkList(head);
cout<<endl;
cout<<"AddElementAtEnd::"<<endl;
cout<<endl;
AddElementAtEnd(head,19);
Print_LinkList(head);
cout<<endl;
cout<<"AddElementAtBegning::"<<endl;
cout<<endl;
AddElementAtBegning(head,16);
Print_LinkList(head);
cout<<endl;
AddElementAtBetween(head,44,3);
AddElementAtBetween(head,100,2);
AddElementAtBetween(head,101,2);
cout<<"AddElementAtBetween"<<endl;
cout<<endl;
Print_LinkList(head);
cout<<endl;
cout<<"deleteFromBegning"<<endl;
cout<<endl;
deleteFromBegning(head);
Print_LinkList(head);
cout<<endl;
deletation(head,44);
cout<<endl;
Print_LinkList(head);
}