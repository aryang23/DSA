//STACK
//By Aryan Grover(@aryang23)

//LIFO Order means Last In First Out
//Added at End and Remove at End

#include<iostream>
#include<vector>
using namespace std;

//Implementation of Stack DSA using Vector
template<typename T,typename U>
class Stack{
	private:
		vector<T> v;
		vector<U> v2;
	public:
		void push(T d)
		{
			v.push_back(d);
		}
		bool empty()
		{
			return v.size()==0;
		}
		void pop()
		{
			if(!v.empty())
			{
				v.pop_back();
			}
		}
		T top()
		{
			return v[v.size()-1];
		}
};
int main()
{
	Stack<string> s;
	for(int i=1;i<=5;i++)
	{
		s.push("aryan");
	}
	//Now Print the Content
	while(!s.empty())
	{
		cout<<s.top()<<endl;
		s.pop();
	}
}
