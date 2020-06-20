//By Aryan Grover (@aryang23)

//Remove Duplicates Character from a String
#include<iostream>
#include<cstring>
using namespace std;
void removeDuplicates(char a[])
{
	//if n==1 or n==0 return that only
	//2 Pointers one at 0 and other at 1
	int l=strlen(a);
	if(l==1 or l==0)
	return;
	int j=0;
	int i=1;
	cout<<l<<endl; 
	while(i<=l)
	{
		if(a[i]==a[j])
		{
			i++;
		}
		else
		{
			j++;
			a[j]=a[i];
			i++;
		}
	}
	a[j++]='\0';
}
int main()
{
	char a[1000];
	cin.getline(a,1000);
	removeDuplicates(a);
	cout<<a;
}
