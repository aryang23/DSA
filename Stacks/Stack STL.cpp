//Stack STL
//By Aryan Grover(@aryang23)

//Will Add more in this soon
#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int> s;
	for(int i=0;i<5;i++)
	{
		s.push(i*i);
	}
	while(!s.empty())
	{
		cout<<s.top()<<endl;
		s.pop();
	}
}

//Push, Pop, Top ALl in O(1)

