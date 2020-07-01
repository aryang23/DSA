//Print All Levels
//By Aryan Grover(@aryang23)

int height(node*root)
{
	if(root==NULL)
	return 0;
	int lh=height(root->left);
	int rh=height(root->right);
	return max(lh,rh)+1;
}
void printKthLevel(node*root,int k)
{
	if(root==NULL)
	return;
	if(k==1)
	{
		cout<<root->data<<" ";
		return;
	}
	printKthLevel(root->left,k-1);
	printKthLevel(root->right,k-1);
}
void printAllLevels(node*root)
{
	int H=height(root);
	for(int i=1;i<=H;i++)
	{
		printKthLevel(root,i);
		cout<<endl;
	}
	
}
