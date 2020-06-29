//Merge Sort in Linked Lists
//By Aryan Grover(@aryang23)
//3 Steps
//1. Divide at Mid
//2. Sort the Smaller Linked Lists
//3. Merge Both the Linked Lists


node* merge(node*a,node*b)
{
	if(a==NULL)
	return b;
	if(b==NULL)
	return a;
	node*c;
	if(a->data<b->data)
	{
		c=a;
		c->next=merge(a->next,b);
	}
	else
	{
		c=b;
		c->next=merge(a,b->next);
	}
	return cl
}
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
node*mergeSort(node*head)
{
	//Base Case
	if(head==NULL or head->next==NULL)
	return head;
	
	//Recursive Case
	//1. Mid Point
	node*mid=midPoint(head);
	
	//Recursively Sort 2 LL
	node*a=head;
	node*b=mid->next;
	mid->next=NULL;
	a=mergeSort(a);
	b=mergeSort(b);
	
	//3. Merge
	node*c=merge(a,b);
	return c;
}
