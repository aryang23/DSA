//Array Target Sum Triplets

//By Aryan Grover(@aryang23)
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int key;
	cin>>key;
	int i=0;
	sort(a,a+n);
	
	while(i<n)
	{
		int k=i+1;
		int j=n-1;
		while(k<j)
		{
			int csum=a[i]+a[k]+a[j];
			if(csum==key)
			{
//				int b,c,d;
//				b=a[i]; c=a[k]; d=a[j];
				int b[3];
				b[0]=a[i]; b[1]=a[j]; b[2]=a[k];
				sort(b,b+3);
				cout<<b[0]<<", "<<b[1]<<" and "<<b[2]<<endl;
				k++;
				j--;
			}
			if(csum>key)
			{
				j--;
			}
			if(csum<key)
			{
				k++;
			}
		}
		i++;
	}
	
}


//By Aryan Grover(@aryang23)
