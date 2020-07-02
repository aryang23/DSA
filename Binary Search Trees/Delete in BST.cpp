//Delete in BST
//By Aryan Grover(@aryang23)
node* deleteInBST(node*root,int data)
{
	//3 Cases
	//Leaf Node
	//1 Children
	//2 Children
	
	if(root==NULL)
	return NULL;
	
	else if(data<root->data)
	{
		root->left=deleteInBST(root->left,data);
		return root;
	}
	else if(data==root->data)
	{
		//We have found the node to be deleted
		if(root->left==NULL and root->right==NULL)
		{
			delete root;
			return NULL;
		}
		//One Children
		if(root->left!=NULL and root->right==NULL)
		{
			node*temp=root->left;
			delete root;
			return temp;
		}
		else if(root->left==NULL and root->right!=NULL)
		{
			node*temp=root->right;
			delete root;
			return temp;
		}
		//2 Children
		if(root->left!=NULL and root->right!=NULL)
		{
			node*replace = root->right;
			while(replace->left!=NULL)
			{
				replace=replace->left;
			}
			root->data=replace->data;
			root->right=deleteInBST(root->right,replace->data);
			return root;
		}
	}
	else{
		root->right=deleteInBST(root,data);
		return root;
}
}
