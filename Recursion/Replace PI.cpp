//Replace PI
//By Aryan Grover (@aryang23)
#include<bits/stdc++.h>
using namespace std;
void replacePi(char a[],int i)
{
	if(a[i]=='\0' or a[i+1]=='\0')
	{
		return;
	}
	
	//Look for Pi for current
	if(a[i]=='p' and a[i+1]=='i')
	{
		//Shifting +Replacement
		int j=i+2;
		while(a[j]!='\0')
		{
			j++;
		}
		while(j>=i+2)
		{
			a[j+2]=a[j];
			j--;
		}
		a[i]='3';
		a[i+1]='.';
		a[i+2]='1';
		a[i+3]='4';
		
		replacePi(a,i+4);
	}
	else
	replacePi(a,i+1);
}
/*int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='p' and s[i+1]=='i')
		{
			cout<<"3.14";
			i++;
		}
		else
		cout<<s[i];
	}	
}*/
int main()
{
	char a[1000];
	cin>>a;
	replacePi(a,0);
	cout<<a;
}
