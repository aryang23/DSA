//BST
//By Aryan Grover(@aryang23)
#include<iostream>
#include<queue>
using namespace std;
class node{
	public:
	int data;
	node* left;
	node* right;
	node(int d)
	{
		data=d;
		left=NULL;
		right=NULL;
	}
};
void bfs2(node *root)
{
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty())
	{
		node*a=q.front();
		if(a==NULL)
		{
			cout<<endl;
			q.pop();
			if(!q.empty())
			{
				q.push(NULL);
			}
		}
		else{
		
		cout<<a->data<<",";
		q.pop();
		
		if(a->left)
		{
			q.push(a->left);
		}
		if(a->right)
		{
			q.push(a->right);
		}
	}
}
}

//Accepts the Old Root Node and returns the New Root Node
node* insertInBST(node*root,int d)
{
	if(root==NULL)
	return new node(d);
	//Recursive Case
	if(d<=root->data)
	{
		root->left=insertInBST(root->left,d);
	}
	else
	root->right=insertInBST(root->right,d);
	return root;
}
node* build(){
	//Read a List of Characters until you get -1
	int d;
	cin>>d;
	node*root=NULL;
	while(d!=-1)
	{
		root=insertInBST(root,d);
		cin>>d;
	}
	return root;
}
void inorder(node*root)
{
	if(root==NULL)
	return;
	inorder(root->left);
	cout<<root->data;
	inorder(root->right);
}
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
int main()
{
	node*root=build();
	inorder(root);
	cout<<endl<<endl;
	bfs2(root);
	int s;
	cin>>s;
	if(search(root,s))
	cout<<"YES";
	else
	cout<<"NO";
	
	root=deleteInBST(root,s);
	inorder(root);
	cout<<endl<<endl;
	bfs2(root);
}
