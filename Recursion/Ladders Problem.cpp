//Ladders Problem
//By Aryan Grover (@aryang23)
#include<iostream>
int f(int n,int k)
{
	if(n==0)
	return 1;
	if(n<0)
	return 0;
	
	int ans=0;
	for(int i=1;i<=k;i++)
	{
		ans+=f(n-i,k);
	}
	return ans;
}
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	cout<<f(n,k);
}
