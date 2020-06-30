//Stack Using 2 Queues
//By aryan Grover(@aryang23)

#include<iostream>
#include<queue>
using namespace std;
template<typename T>
class Stack{
	queue<T> q1,q2;
	
	public:
		void push(T x)
		{
			q1.push(x);
		}
		void pop()
		{
			if(q1.empty())
			{
				return;
			}
			for(int i=0;i<q1.size()-1;i++)
			{
				q2.push(q1.front());
				q1.pop();
			}
			q1.pop(); 
			
			//Swap the Names of q1 and q2
			swap(q1,q2);
		}
		T top()
		{
			if(q1.empty())
			{
				return 0;
			}
			for(int i=0;i<q1.size()-1;i++)
			{
				q2.push(q1.front());
				q1.pop();
			}
			int e=q1.front();
			q2.push(q1.front());
			q1.pop();
			
			//Swap the Names of q1 and q2
			swap(q1,q2);
			return e;
		}
		int size()
		{
			return q1.size()+q2.size();
		}
		bool empty()
		{
			return size()==0;
		}
};
int main()
{
	Stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	
	while(!s.empty())
	{
		cout<<s.top();
		s.pop();
	}

}
