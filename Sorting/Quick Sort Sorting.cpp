//Quick Sort
//By Aryan Grover (@aryang23)
#include<iostream>
using namespace std;
int partition(int *a,int s,int e)
{
	//Inplace Algo(Can't take extra space)
	int i=s-1;
	int j=s;
	for( ;j<=e-1;j++)
	{
		if(a[j]<a[e])
		{
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[e]);
	return i+1;
}
void quickSort(int a[],int s,int e)
{
	//Base Case
	if(s>=e)
	return;
	
	//Recursive Case
	int p=partition(a,s,e);
	quickSort(a,s,p-1);
	quickSort(a,p+1,e);
}
int main()
{
	int a[]={2,7,8,6,1,5,4};
	int n=sizeof(a)/sizeof(int);
	
	quickSort(a,0,n-1);
	//Print the Array
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
}
