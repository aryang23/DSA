//Checking BST or Not
//By Aryan Grover(@aryang23)
bool isBST(node *root,int minV=INT_MIN,int maxV=INT_MAX)
{
	if(root==NULL)
	return true;
	
	if(root->data>=minV and root->data<=maxV and isBST(root->left,minV,root->data) and isBST(root->right,root->data,maxV))
	{
		return true;
	}
	return false;
}
