//is Height Balanced Or Tree is Balanced Or Not
//By Aryan Grover(@aryang23)
class HBPair{
	public:
		int height;
		bool isBalanced;
};
HBPair isHeightBalanced(node*root)
{
	HBPair p;
	if(root==NULL)
	{
		p.height=0;
		p.isBalanced=true;
		return p;
	}
	
	//Recursive  Case
	HBPair left=isHeightBalanced(root->left);
	HBPair right=isHeightBalanced(root->right);
	p.height=max(left.height,right.height)+1;
	if(abs(left.height-right.height)<=1 and left.isBalanced and right.isBalanced)
	{
		p.isBalanced=true;
	}
	else
	{
		p.isBalanced=false;
	}
	return p;
}
