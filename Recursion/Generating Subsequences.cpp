//Generating Subsequences
//By Aryan Grover (@aryang23)
#include<bits/stdc++.h>
using namespace std;
void generateSubsequence(char *in, char *out,int i,int j)
{
	//Base Case
	if(in[i]=='\0')
	{
		out[j]='\0';
		cout<<out<<endl;
		return;
	}
	
	//Recursive Case
	//Include The Current Character
	out[j]=in[i];
	generateSubsequence(in,out,i+1,j+1);
	
	//Exclude the Current Char
	generateSubsequence(in,out,i+1,j);
}
int main()
{
	char input[]="abc";
	char output[10];
	generateSubsequence(input,output,0,0);
}
