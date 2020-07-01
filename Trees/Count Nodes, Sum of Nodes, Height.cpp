//Count Nodes, Sum of Nodes, Height
//By Aryan Grover(@aryang23)

int count(node*root)
{
	if(root==NULL)
	return 0;
	return 1+count(root->left)+count(root->right);
}
int sum(node*root)
{
	if(root==NULL)
	return 0;
	return root->data+sum(root->left)+sum(root->right);
}

int height(node*root)
{
	if(root==NULL)
	return 0;
	int lh=height(root->left);
	int rh=height(root->right);
	return max(lh,rh)+1;
}
