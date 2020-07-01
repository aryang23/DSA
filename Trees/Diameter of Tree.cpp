//Diameter of Tree
//By Aryan Grover(@aryang23)
//2 Methods One is O(n2) and Next is O(n)
int diameter(node*root)
{
	if(root==NULL)
	return 0;
	
	int h1=height(root->left);
	int h2=height(root->right);
	int op1=h1+h2;
	int op2=diameter(root->left);
	int op3=diameter(root->right);
	return max(op1,max(op2,op3));
}

class Pair{
	public:
		int height;
		int dia;
};

Pair fastDia(node*root)
{
	Pair p;
	if(root==NULL)
	{
		p.dia=p.height=0;
		return p;
	}
	//Otherwise
	Pair left=fastDia(root->left);
	Pair right=fastDia(root->right);
	
	p.height=max(left.height,right.height)+1;
	p.dia=max(left.height+right.height,max(left.dia,right.dia));
	return p;
}
