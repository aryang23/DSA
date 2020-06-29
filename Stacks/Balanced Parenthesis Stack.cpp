//Balanced Parenthesis
//By Aryan Grover(@aryang23)
#include<iostream>
#include<stack>
using namespace std;
int main()
{
	string s;
	cin>>s;
	stack<char> st;
	bool flag=false;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='(' or s[i]=='[' or s[i]=='{')
		{
			st.push(s[i]);
		}
		else if(s[i]==')')
		{
			if(st.top()!='(')
			{
				flag=true;
				break;
			}
			st.pop();
		}
		else if(s[i]==']')
		{
			if(st.top()!='[')
			{
				flag=true;
				break;
			}
			st.pop();
		}
		else if(s[i]=='}')
		{
			if(st.top()!='{')
			{
				flag=true;
				break;
			}
			st.pop();
		}
	}
	if(flag==true)
	cout<<"NO";
	else
	cout<<"YES";
}
