//Reverse a Linked Lists
//By Aryan Grover(@aryang23)
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
		C->next=prev;
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
