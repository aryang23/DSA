//Character Array and cin.getline()

//By Aryan Grover (@aryang23)


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void readline(char a[],int maxLen,char delim='\n')
{
	int i=0;
	char ch=cin.get();
	while(ch!=delim)
	{
		a[i]=ch;
		i++;
		if(i==maxLen-1)
		break;
		ch=cin.get();
	}
	a[i]='\0';
	return;
	
}
int main()
{
	int b[]={1,2,3,4};
	cout<<b<<endl; //It will print the address of the first element
	
	char a[]={'a','b','c','d','\0'};
	cout<<a<<endl; //It will print the contents of the array
	
	char s[10];
	cin>>s;
	cout<<s;
	
	//cin doesn;t input a newline char
	//So Put a loop to read characters untill you get a new line
	
	char c[1000];
	readline(c,1000,'\n');
	cout<<c;
	
	//Readline is inbuilt too named is getline
	char d[1000];
	cin.getline(d,1000,'\n');
	cout<<d;
	
}
//By Aryan Grover (@aryang23)
