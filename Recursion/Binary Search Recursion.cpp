//Binary Search Recursion
//By Aryan Grover(@aryang23)
#include<iostream>
using namespace std;
int binarySearch(int a[],int s,int e,int key)
{
	//Base Case
	if(s>e)
	return -1;
	//Recursive Case
	int mid=(s+e)/2;
	if(a[mid]==key)
	return mid;
	if(a[mid]<key)
	{
		binarySearch(a,mid+1,e,key);
	}
	else
	{
		binarySearch(a,s,mid-1,key);
	}
}
int main()
{
	int a[]={1,2,3,5,6,8,10,13,16,20};
	int n=sizeof(a)/sizeof(int);
	int s=0,e=n-1;
	int key;
	cin>>key;
	int ans=binarySearch(a,s,e,key);
	if(ans==-1)
	cout<<"NO";
	else
	{
		cout<<ans+1;
	}
}
