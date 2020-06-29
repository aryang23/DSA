#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
		
	//Constructor
	node(int d)
	{
		data=d;
		next=NULL;
	}
};

void insertAtHead(node*&head, int d)
{
	node* n=new node(d);
	n->next=head;
	head=n;
}
void print(node*&head)
{
	node*n=head;
	while(n!=NULL)
	{
		cout<<n->data<<"->";
		n=n->next;
	}
	cout<<endl;
}
void insertAtTail(node*&head,int d)
{
	node*temp=head;
	if(head==NULL)
	{
		insertAtHead(head,d);
		return;
	}
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	node*n=new node(d);
	temp->next=n;
	n->next=NULL;
}


void insertInMiddle(int data,node*&head,int pos)
{
	node*temp=head;
	node*n=new node(data);
	while(pos>0)
	{
		temp=temp->next;
		pos--;
	}
	n->next=temp->next;
	temp->next=n;
}

int len(node*head)
{
	int count=0;
	while(head!=NULL)
	{
		head=head->next;
		count++;
	}
	return count;
}
void insertInMiddle2(node*&head,int data,int p)
{
	if(head==NULL or p==0)
	insertAtHead(head,data);
	
	else if(p>len(head))
	{
		insertAtTail(head,data);
	}
	else
	{
		//Insert in Middle
		//Take p-1 jumps
		node*temp=head;
		int jump=1;
		while(jump<=p-1)
		{
			temp=temp->next;
			jump++;
		}
		node*n=new node(data);
		n->next=temp->next;
		temp->next=n;
	}
}
void deleteAtHead(node*&head)
{
	if(head==NULL)
	return;
	node*temp=head;
	head=head->next;
	delete temp;
}
void deleteAtTail(node*&head)
{
	node*temp=head;
	node*prev;
	while(temp->next!=NULL)
	{
		prev=temp;
		temp=temp->next;
	}
	prev->next=NULL;
	delete temp;
}
void deleteAtMiddle(node*&head,int p)
{
	if(p==0)
	deleteAtHead(head);
	node*prev,*temp=head;
	while(p>0)
	{
		prev=temp;
		temp=temp->next;
	}
	prev->next=temp->next;
	delete temp;
}
int searching(node*head,int d)
{
	int i=-1,j=0;
	while(head!=NULL)
	{
		if(head->data==d)
		{
			i=j;
			break;
		}
		head=head->next;
		j++;
	}
	return j;
}

//Reverse a Linked Lists
void reverse(node*&head)
{
	node*C=head;
	node*P=NULL;
	node*N;
	
	while(C!=NULL)
	{
		//Save the Next Node
		N=C->next;
		//Make the Current->next as prev
		C->next=P;
		//prev to C
		P=C;
		//C to N
		C=N;
	}
	head=P;
}

node* reverseRec(node*head)
{
	//Base Case
	if(head->next==NULL or head==NULL)
	{
		//Only One Node or No LL
		return head;
	}
	
	//Recursive Case
	node* smallHead=reverseRec(head->next);
	node*C=head;
	C->next->next=C;
	C->next=NULL;
	return smallHead;
}

int main()
{
	//Linked Lists
	node*head=NULL;
	insertAtHead(head,3);
	insertAtHead(head,4);
	insertAtHead(head,5);
	insertAtTail(head,66);
	print(head);
	insertInMiddle2(head,100,2);
	print(head); 
	insertAtHead(head,44);
	insertAtHead(head,55);
	print(head);
	deleteAtHead(head);
	deleteAtTail(head);
	print(head);
	cout<<endl<<searching(head,3);
	cout<<endl<<endl;
	print(head);
	cout<<endl;
	node*d=reverseRec(head);
	print(d);
}
