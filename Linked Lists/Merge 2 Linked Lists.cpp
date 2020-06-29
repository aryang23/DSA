//Merge 2 Linked Lists
//By Aryan Grover(@aryang23)
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
