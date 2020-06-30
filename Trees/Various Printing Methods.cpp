//Various Printing Methods
//By Aryan Grover(@aryang23)
//Preorder means Root then Left then Right
//Inorder means Left Part then Root then Right Part
//Post Order means Left Part then Right Part then Root

void printPreOrder(node*root)
{
	if(root==NULL)
	return;
	cout<<root->data<<",";
	printPreOrder(root->left);
	printPreOrder(root->right);
}
void printInOrder(node*root)
{
	if(root==NULL)
	return;
	printInOrder(root->left);
	cout<<root->data<<",";
	printInOrder(root->right);
}
void printPostOrder(node*root)
{
	if(root==NULL)
	return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<",";
}
