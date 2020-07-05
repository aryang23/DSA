//Building Heap from Array
//By Aryan Grover(@aryang23)
#include<iostream>
#include<vector>
using namespace std;
void buildHeap(vector<int> &v)
{
	for(int i=2;i<v.size();i++)
	{
		int idx=i;
		int parent=i/2;
		while(idx>1 and v[idx]>v[parent])
			{
				swap(v[idx],v[parent]);	
				idx=parent;
				parent=parent/2;
			}
	}
}
bool minHeap=false;
bool compare(int a,int b)
	{
		if(minHeap)
		return a<b;
		return a>b;
	}
void heapify(vector<int>&v,int idx)
	{
		int left=2*idx;
		int right=left+1;
		int minIdx=idx;
		int last=v.size()-1;
		if(left<=last and compare(v[left],v[idx]))
		{
			minIdx=left;
		}
		if(right<=last and compare(v[right],v[minIdx]))
		{
			minIdx=right;
		}
		if(minIdx!=idx)
		{
			swap(v[idx],v[minIdx]);
			heapify(v,minIdx);
		}
	}
void buildHeapOptimized(vector<int> &v)
{
	for(int i=(v.size()-1)/2;i>=1;i--)
	{
		heapify(v,i);
	}
}
void print(vector<int> v)
{
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	vector<int> v{-1,10,20,5,6,1,8,9,4};
	print(v);
	buildHeapOptimized(v);
	print(v);
	
}
