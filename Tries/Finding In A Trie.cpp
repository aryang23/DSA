//Finding In A Trie
//By Aryan Grover(@aryang23)
bool find(char *w)
	{
		Node* temp=root;
		for(int i=0;w[i]!='\0';i++)
		{
			char ch=w[i];
			if(temp->children.count(ch)==0)
			return false;
			else
			temp=temp->children[ch];
		}
		return temp->terminal;
	}
