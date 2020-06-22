//Find a Peak Element in An Array

//By Aryan Grover(@aryang23)
//Find A Peak Element in an Array
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
	int s=0;
	int e=n-1;
	while(s<=e)
	{
		int mid=(s+e)/2;
		if(a[mid]>=a[mid-1] and a[mid]>=a[mid+1])
		{
			cout<<a[mid]<<endl;
			break;
		}
		else if(a[mid-1]>a[mid])
		{
			e=mid-1;
		}
		else
		s=mid+1;
	}
	
}
