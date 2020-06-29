//Midpoint of a LL
//By Aryan Grover(@aryang23)
node*midPoint(node*head)
{
	if(head==NULL or head->next==NULL)
	return head;
	
	node*slow=head;
	node*fast=head->next;
	while(fast!=NULL and fast->next!=NULL)
	{
		fast=fast->next->next;
		slow=slow->next;
	}
	return slow;
}
