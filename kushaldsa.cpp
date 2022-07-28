#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
}*top=NULL;
void push(int num)
{
	struct node *temp = new(struct node);
	if(temp==NULL)
	{
		cout<<"Memory out of space ! Stack overflow !!\n";
		return;
	}
	temp->data=num;
	temp->next=top;
	top=temp;
}
void pop()
{
	if(top==NULL)
	{
		cout<<"Stack is Empty !!\n";
		return;
	}
	cout<<"Number popped = "<<top->data<<"\n";
	top=top->next;
}
void top_stack()
{
	if(top==NULL)
	{
		cout<<"Stack is Empty  !!\n";
		return;
	}
	cout<<"Top of the Stack = "<<top->data<<"\n";
}
void disp_stack()
{
	if(top==NULL)
	{
		cout<<"Stack is Empty !!\n";
		return;
	}
	cout<<"Stack is :\n";
	struct node *temp=top;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"\n";
}
int main()
{
	int optn,num;
	
	while(1)
	{
		cout<<"\nOperation available :\n";
		cout<<"1. PUSH\n2. POP\n3. TOP\n4. Display the stack\n5. EXIT\n\n";
		cout<<"Enter your choice : ";
		cin>>optn;
		
		switch(optn)
		{
			case(1):
				cout<<"Enter the number : ";
				cin>>num;
				push(num);
				break;
			case(2):
				pop();
				break;
			case(3):
				top_stack();
				break;
			case(4):
				disp_stack();
				break;
			case(5):
				exit(0);
				break;
			default:
				cout<<"\nInvalid option !!";
				continue;
		}
	}
	return 0;
}