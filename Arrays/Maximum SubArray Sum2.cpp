//By Aryan Grover(@aryang23)

//Maximum Subarray 2
//PreComputing CSum
//csum[i]=csum[i-1]+a[i]
//Sum of Array(i,j)=cs[j]-cs[i-1]
//O(N2)

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int csum[n];
	int a[n];
	cin>>a[0];
	csum[0]=a[0];
	for(int i=1;i<n;i++)
	{
		cin>>a[i];
		csum[i]=csum[i-1]+a[i];
	}
	int crsum=0,msum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			crsum=csum[j]-csum[i-1];
			if(crsum>msum)
			{
				msum=crsum;
			}
		}
	}
	cout<<msum<<endl;
}

//By Aryan Grover (@aryang23)
