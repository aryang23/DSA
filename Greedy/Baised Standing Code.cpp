//Baised Standing Code
//By Aryan Grover(@aryang23)
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
	int arr[1000000]={0};
	int t,n;
	cin>>t;
	while(t--)
	{
		memset(arr,0,sizeof arr);
		string name;
		int n,rank;
		cin>>n;
		for(int i=0;i<n;i++)
		{
		cin>>name>>rank;
		arr[rank++];
		}
		int ar=1;
		int sum=0;
		for(int i=0;i<=n;i++)
		{
			while(arr[i])
			{
				sum+=abs(ar-i);
				arr[i]--;
				ar++;
			}
		}
		cout<<sum<<endl;
	}
}
