//Counting Sort
//For Limited Range Algo
//Although Not Very Effective for large inputs but my fav one :)
//By Aryan Grover (@aryang23)
#include<iostream>
using namespace std;
int main()
{
	int arr[]={88,97,10,12,15,1,5,6,12,5,8};
	int n=sizeof(arr)/sizeof(int);
	
	int b[100]={0};
	for(int i=0;i<n;i++)
	{
		b[arr[i]]++;
	}
	for(int i=0;i<100;i++)
	{
		if(b[i]>0)
		{
			while(b[i]>0)
			{
				cout<<i<<",";
				b[i]--;
			}
		}
	}
}
