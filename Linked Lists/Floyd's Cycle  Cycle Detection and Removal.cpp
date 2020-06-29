//Floyd's Cycle
//Cycle Detection and Removal
//By Aryan Grover(@aryang23)
bool detectCycle(node*head)
{
	node*slow=head;
	node*fast=head;
	
	while(fast!=NULL and fast->next!=NULL)
	{
		fast=fast->next->next;
		slow=slow->next;
		if(fast==slow)
		{
			return true;
		}
	}
	return false;
}

//Remove Cycle
//Once they meet then take slow to head and move slow and fast both 1 stepp now
//Now they will meet at the point where the cycle is
//Best Explained
