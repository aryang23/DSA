//BFS or Level Order Print
//By Aryan Grover(@aryang23)

void bfs(node *root)
{
	queue<node*> q;
	q.push(root);
	
	while(!q.empty())
	{
		node*a=q.front();
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
