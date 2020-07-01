//Replace Sum 
//By Aryan Grover(@aryang23)
int replaceSum(node*root)
{
	if(root==NULL)
	return 0;
	//Check for Leaf Node
	if(root->left==NULL and root->right==NULL)
	{
		return root->data;
	}
	int leftSum = replaceSum(root->left);
	int rightSum = replaceSum(root->right);
	int temp=root->data;
	root->data=leftSum+rightSum;
	return temp+root->data;
}
