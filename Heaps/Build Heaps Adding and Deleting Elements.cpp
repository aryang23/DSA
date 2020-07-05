//Build Heaps Adding and Deleting Elements.cpp

//By Aryan Grover(@aryang23)
#include<iostream>
#include<vector>
using namespace std;
class Heap{
	vector<int> v;
	bool minHeap;
	bool compare(int a,int b)
	{
		if(minHeap)
		return a<b;
		return a>b;
	}
	void heapify(int idx)
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
			heapify(minIdx);
		}
	}
	public:
		Heap(int defaultSize=10,bool type=true)
		{
			v.reserve(defaultSize);
			v.push_back(-1);
			minHeap=type;
		}
		
		void push(int d)
		{
			v.push_back(d);
			int idx=v.size()-1;
			int parent=idx/2;
			//Keep Pushing to the top either u reach a top node or stop midway
			//bcoz current element is already greater than parent
			while(idx>1 and compare(v[idx],v[parent]))
			{
				swap(v[idx],v[parent]);
				idx=parent;
				parent=parent/2;
			}
		}
		int top()
		{
			return v[1];
		}
		void pop()
		{
			//1st is to swap
			int lastIdx=v.size()-1;
			swap(v[1],v[lastIdx]);
			v.pop_back();
			heapify(1);
		}
		bool empty()
		{
			return v.size()==1;
		}
		
};
int main()
{
	//Give some init size and type that is min or max
	//Pop means either remove smallest element or the largest element
	//3 Methods in Pop
	//1 is Swap 1st and last
	//2. Shrink and Remove the Last Node
	//3. Heapify to Restore h
	
	Heap h;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int no;
		cin>>no;
		h.push(no);
	}
	
	//Remove elements one by one
	while(!h.empty())
	{
//		h.pop();
		cout<<h.top()<<" ";
		h.pop();
	}
	
	//Build Heap from Array in NLogN 
}
