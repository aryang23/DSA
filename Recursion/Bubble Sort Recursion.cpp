//Bubble Sort Recursively
//By Aryan Grover (@aryang23)
#include<iostream>
using namespace std;
void bubbleSort(int a[],int n)
{
	if(n==1)
	return;
	//Rec Case
	for(int i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		swap(a[i],a[i+1]);
	}
	bubbleSort(a,n-1);
}
void bubbleSortRecursive(int a[],int n,int j)
{
	if(n==1)
	return;
	
	//Recursive Case
	if(j==n-1)
	return bubbleSortRecursive(a,n-1,0);
	if(a[j]>a[j+1])
	{
		swap(a[j],a[j+1]);
	}
	bubbleSortRecursive(a,n,j+1);
	return;
}
int main()
{
	int a[]={5,4,3,1,2};
	int n=5;
	bubbleSortRecursive(a,n,0);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
