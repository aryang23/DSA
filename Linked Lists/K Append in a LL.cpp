//By Aryan Grover(@aryang23)
#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node*next;
		node(int d)
		{
			data=d;
			next=NULL;
		}
};
void insertAtHead(node*&head,int d)
{
	node*n=new node(d);
	n->next=head;
	head=n;
}
void insertAtTail(node*&head,int d)
{
	if(head==NULL)
	{
		insertAtHead(head,d);
		return;
	}
	
	node*temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	node*n=new node(d);
	temp->next=n;
	n->next=NULL;
}
void print(node*&head)
{
	node*temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->next;
	}
	cout<<endl<<endl;
}
int length(node*&head)
{
	node*temp=head;
	int cnt=0;
	while(temp!=NULL)
	{
		cnt++;
		temp=temp->next;
	}
}
node* kAppend(node*&head,int n,int k)
{
	//2 Pointers Current and Prev
	node*C=head;
	node*P=NULL;
	for(int i=0;i<n-k;i++)
	{
		P=C;
		C=C->next;
	}
//	print(head);
//	print(C);
	P->next=NULL;
	node*temp=C;
//	print(head);
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=head;
	head=C;
	return head;
}

int main()
{
	int n,no;
	cin>>n;
	node*head=NULL;
	for(int i=0;i<n;i++)
	{
		cin>>no;
		insertAtTail(head,no);
	}
	int k;
	cin>>k;
	node*e=kAppend(head,n,k);
	print(e);
}
