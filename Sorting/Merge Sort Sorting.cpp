//Merge Sort
//By Aryan Grover (@aryang23)
#include<iostream>
using namespace std;
void merge(int a[],int s,int e)
{
	int mid=(s+e)/2;
	int i=s,j=mid+1,k=s;int temp[100];
	while(i<=mid and j<=e)
	{
		if(a[i]<a[j])
		{
			temp[k++]=a[i++];
		}
		else
		temp[k++]=a[j++];
	}
	while(i<=mid)
	{
		temp[k++]=a[i++];
	}
	while(j<=e)
	{
		temp[k++]=a[j++];
	}
	
	//Now Copy All Elements to the Original array
	for(int i=s;i<=e;i++)
	{
		a[i]=temp[i];
	}
}
void mergeSort(int a[],int s,int e)
{
	//Base Case
	if(s>=e)
	return;
	
	//Merge Sort
	int mid=(s+e)/2;
	mergeSort(a,s,mid);
	mergeSort(a,mid+1,e);
	merge(a,s,e);
}
int main()
{
	int a[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	mergeSort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
