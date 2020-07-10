//Connecting Wires
//By Aryan Grover(@aryang23)
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int n,s,e;
	cin>>n;
	vector<int> v1,v2;
	for(int i=0;i<n;i++)
	{
		cin>>s>>e;
		v1.push_back(s);
		v2.push_back(e);
	}
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		cnt+=v2[i]-v1[i];
	}
	cout<<cnt<<endl;
}
