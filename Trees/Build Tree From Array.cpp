//Build Tree From Array
//By Aryan Grover(@aryang23)
node* buildTreeFromArray(int*a,int s,int e)
{
	//Base Case
	if(s>e)
	return NULL;
	int mid=(s+e)/2;
	node* root=new node(a[mid]);
	root->left=buildTreeFromArray(a,s,mid-1);
	root->right=buildTreeFromArray(a,mid+1,e);
	return root;
}
