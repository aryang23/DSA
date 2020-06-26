//By Aryan Grover (@aryang23)
//By Aryan Grover (@aryang23)

//First Occurence, Last Occurence, All Occurence.cpp
#include<iostream>
using namespace std;
int firstOcc(int a[],int n,int key)
{
	//Not Found
	if(n==0)
	return 0;
	
	//Rec  Case
	if(a[0]==key)
	return 0;
	int i=firstOcc(a+1,n-1,key);
	if(i==-1)
	return -1;
	return i+1;
}
//Different Style
int linearSearch(int *a,int i,int n,int key)
{
	if(i==n)
	return -1;
	//Rec Case
	if(a[i]==key)
	{
		return i;
	}
	return linearSearch(a,i+1,n,key);
	
}
int lastOcc(int a[],int n,int key)
{
	//First Make Call on rem part and then check
	if(n==0)
	return -1;
	
	//Rec Case
	int i=lastOcc(a+1,n-1,key);
	if(i==-1)
	{
		//Check
		if(a[0]==key)
		return 0;
		return -1;
	}
	//If i hasn't returned that
	return i+1;
}
void allOcc(int a[],int i,int n,int key)
{
	if(i==n)
	return;
	if(a[i]==key)
	cout<<i<<",";
	allOcc(a,i+1,n,key);
}
int storeOcc(int *a,int i,int n,int *out,int j,int key)
{
	if(i==n)
	return j;
	if(a[i]==key)
	{
		out[j]=i;
		j++;
	}
	return storeOcc(a,i+1,n,out,j,key);
}
int main()
{
	int arr[]={1,2,3,7,4,5,6,7,10};
	int key=7;
	int n=sizeof(arr)/sizeof(int);
	cout<<lastOcc(arr,n,key);
	cout<<endl;
	allOcc(arr,0,n,17);
	int output[100]={0};
	cout<<endl<<endl;
	int cnt=storeOcc(arr,0,n,output,0,key);
	for(int k=0;k<cnt;k++)
	{
		cout<<output[k]<<",";
	}
}
