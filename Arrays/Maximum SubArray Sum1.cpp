//By Aryan Grover (@aryang23)
//Approach for Maximum SubArraySum Method 1
//This is O(N3) Approach

//Maximum Subarray Sum 1
//It is for Maximum SubArray Sum
//O(N^3) Approach, Maximum Subarray Sum 2 is O(N^2) and Maximum SubArray Sum 3 is O(N)
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
	int csum=0,msum=0,li=0,ri=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			csum=0;
			for(int k=i;k<=j;k++)
			{
				csum+=a[k];
			}
			if(csum>msum)
			{
				msum=csum;
				li=i;
				ri=j;
			}
		}
	}
	cout<<msum<<" is from "<<li<<" to "<<ri<<endl;
}
//By Aryan Grover (@aryang23)
