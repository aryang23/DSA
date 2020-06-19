 //Piyush and Magical Park
 
 //By Aryan Grover (@aryang23)
 
 //Piyush and Magical Park CB
#include<iostream>
using namespace std;
void solveMagicalPark(char a[][1000],int n,int m,int k,int s)
{
	bool success=true;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			char ch=a[i][j];
			if(s<k)
			{
				success=false;
				cout<<"NO"<<endl;
				return;
			}
			else if(ch=='.')
			{
				s-=2;
			}
			else if(ch=='*')
			{
				s+=5;
			}
			else if(ch=='#')
			{
				break;
			}
			else if(j==n-1)
			{
				break;
			}
			//We also loose the 1 s when moving but it isn't applicable when we are at last
			if(j!=n-1)
			{
				s--;
			}
		}
	}
	if(success==true)
	cout<<"YES"<<endl<<s<<endl;
	else
	cout<<"NO"<<endl;
}
int main()
{
	int n,m,k,s;
	cin>>n>>m>>k>>s;
	char a[1000][1000];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	solveMagicalPark(a,n,m,k,s);
}


 //By Aryan Grover (@aryang23)
