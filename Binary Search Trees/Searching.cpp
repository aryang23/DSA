//By Aryan Grover(@aryang23)
bool search(node*root,int d)
{
	if(root==NULL)
	return false;
	if(root->data==d)
	return true;
	//Recursive Case
	if(d<root->data)
	{
		return search(root->left,d);
	}
	if(d>root->data)
	{
		return search(root->right,d);
	}
}
