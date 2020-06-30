//Question of Vector
//Sorting the Cabs
//By Aryan Grover(@aryang23)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(pair<int,int> a,pair<int,int> b)
{
	int d1=a.first*a.first+a.second*a.second;
	int d2=b.second*b.second+b.first*b.first;
	if(d1==d2)
	{
		return a.first<b.first;
	}
	return d1<d2;
}
int main()
{
	int n,x,y;
	cin>>n;
	vector<pair<int,int> > v;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		v.push_back({x,y});
	}
	sort(v.begin(),v.end(),compare);
	
	for(auto p:v)
	{
		cout<<p.first<<" "<<p.second<<endl;
	}
}
