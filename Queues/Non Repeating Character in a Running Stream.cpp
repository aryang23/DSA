//Non Repeating Character in a Running Stream
//By Aryan Grover(@aryang23)
#include<iostream>
#include<queue>
using namespace std;

int main()
{
	queue<char> q;
	int freq[27]={0};
	
	//Running Stream until a '.' comes
	char ch;
	cin>>ch;
	while(ch!='.')
	{
		//Logic
		//First Query
//		Insert it in the Queue and freq table
		q.push(ch);
		freq[ch-'a']++;
		
		//Now Query
		while(!q.empty())
		{
			int element=q.front()-'a';
			if(freq[element]>1)
			{
				q.pop();
			}
			else
			{
				cout<<q.front()<<endl;
				break;
			}
		}
		//If q is empty
		if(q.empty())
		{
			cout<<"-1"<<endl;
		}
		
		cin>>ch;
	}
}
