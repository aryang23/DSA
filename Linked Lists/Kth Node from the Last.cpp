//Kth Node from the Last
//By Aryan Grover(@aryang23)

//2 Pointers slow and fast
//Move fast K steps
//Then Move Both Fast and slow one step untill fast!=NULL

node* kNodeFromList(node*&head,int k)
{
	node*temp=head;
	node*slow=head,fast=head;
	while(k--)
	{
		fast=fast->next;
	}
	while(fast!=NULL)
	{
		fast=fast->next;
		slow=slow->next;
	}
	return slow;
}
