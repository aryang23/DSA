//This is a Wave Print of a 2D Array
// By Aryan Grover(@aryang23)

//Wave Print
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int m;
	cin>>m;
	int a[n][m];
	int val=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			a[i][j]=val;
			val++;
		}
	}
	for(int j=0;j<m;j++)
	{
		if(j%2==0)
		{
			for(int i=0;i<n;i++)
			{
				cout<<a[i][j];
			}
		}
		else
		for(int i=n-1;i>=0;i--)
		{
			cout<<a[i][j]<<" ";
		}
	}
	
}
