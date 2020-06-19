
//By Aryan Grover(@aryang23)

//Insertion Sort

#include<iostream>
using namespace std;
void insertionSort(int a[],int n)
{
	for(int i=1;i<n;i++)
	{
		int e=a[i];
		int j=i-1;
		while(j>=0 and a[j]>e)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=e;
		
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	insertionSort(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}


//By Aryan Grover(@aryang23)
