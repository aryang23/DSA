//By Aryan Grover(@aryang23)
//Bubble Sort
//Push Larger Elements towards the end of the array by pair wise swapping
//n elements, n-1 iterations
#include<iostream>
using namespace std;
void bubbleSort(int a[],int n)
{
	for(int itr=1;itr<n;itr++)
	{
		for(int j=0;j<=n-itr-1;j++)
		{
			if(a[j]>a[j+1])
			swap(a[j+1],a[j]);
		}
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
	bubbleSort(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

//By Aryan Grover(@aryang23)
