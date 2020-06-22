//By Aryan Grover(@aryang23)

//Method 1
//All Top Left
/*
for(li=0;li<n;li++)
{
	for(lj=0;lj<n;lj++)
	{
		for(bi=li+1;bi<n;bi++)
		{
			for(bj=lj+1;bj<n;bj++)
			{
			    for(k=li;k<bi;k++)
			    {
			    	for(j=lj;j<=bj;j++)
			    		{
			    			sum+=arr[i,j]
			    		}}}}}}
			    			*/
			    	
			
/*
Method 2

//Prefix Sum Method
V=Sum(0,0)->(x,y)
P=Sum(0,0)->(i-1,y)
Q=Sum(0,0)->(x,y-1)
R=Sum(0,0)->(i-1,j-1)
Sum+=V-P-Q+R

for(li=0->n)
{
	for(lj=0->n)
	{
		for(bi=li->n)
		{
			for(bj=lj->n)
			{
			sum+=ps(bi,bj)-ps(li-1,bj)-ps(bi,lj-1)+ps(l1-1,lj-1)
		}}}}
		
		
//Method 3: -


for(i=0->n-1)
{
for(j=0->m-1)
{
sum+=arr[i][j]*[(i+1)(j+1)*(n-i)*(m-j)]
}}
O(N2)
Best Explained in the Video

*/
#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			sum+=arr[i][j]*(i+1)*(j+1)*(n-i)*(m-j);
		}
	}
	cout<<sum<<endl;
}

//SubMatrix Sum Query 

//Do the same approach as being followed in Method 2 that is of Prefix Sum

