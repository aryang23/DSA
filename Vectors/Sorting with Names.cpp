//By Aryan Grover(@aryang23)
#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
class car{
	public:
		int x,y;
		string name;
		car()
		{
			
		}
		car(string n,int x,int y)
		{
			name=n;
			this->x=x;
			this->y=y;
		}
		int dist()
		{
			return x*x+y*y;
		}
};
bool compare(car A,car B)
{
	int da=A.dist();
	int db=B.dist();
	if(da==db)
	{
		return A.name<B.name;
	}
	return da<db;
}
int main()
{
	int n;
	cin>>n;
	vector<car> v;
	int x,y;
	string name;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y>>name;
		car temp(name,x,y);
		v.push_back(temp);
	}
	
	sort(v.begin(),v.end(),compare);
	for(auto c:v)
	{
		cout<<c.name<<sqrt(c.dist())<<" Loc "<<c.x<<" "<<c.y<<endl;
	}
	
}
