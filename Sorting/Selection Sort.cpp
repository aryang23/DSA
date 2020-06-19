//By Aryan Grover
//Selection Sort
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i;j<n;j++)
		{
			
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		swap(a[i],a[min]);
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
