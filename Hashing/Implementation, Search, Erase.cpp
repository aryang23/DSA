//Implementation, Search, Erase
//By Aryan Grover(@aryang23)
#include<iostream>
#include<cstring>
using namespace std;
template<typename T>
class Node{
	public:
	string key;
	T value;
	Node<T>* next;
	Node(string key,T val){
		this->key=key;
		this->value=val;
		next=NULL;
	}
	~Node(){
		if(next!=NULL)
		delete next;
	}
};

template<typename T>
class Hashtable{
	Node<T>** table;
	int cs;
	int ts;
	int hashFn(string key)
	{
		int idx=0;
		int p=1;
		for(int j=0;j<key.length();j++)
		{
			idx+=(key[j]*p)%ts;
			idx=idx%ts;
			p=(p*27)%ts;
		}
		return idx;
	}
	void rehash()
	{
		Node<T>** oldTable=table;
		int ots=ts;
		ts=2*ts;
		table=new Node<T>*[ts];
		for(int i=0;i<ts;i++)
		{
			table[i]=NULL;
		}
		cs=0;
		//Now Shifting All Elements from old table to new table
		for(int i=0;i<ots;i++)
		{
			Node<T>*temp=oldTable[i];
			while(temp!=NULL)
			{
				insert(temp->key,temp->value);
				temp=temp->next;
				cs++;
			}
			if(oldTable[i]!=NULL)
			{
				delete oldTable[i];
			}
			
		}
		delete [] oldTable;
	}
	public:
		Hashtable(int tss=7)
		{
			ts=tss;
			table=new Node<T>*[ts];
			cs=0;
			for(int i=0;i<ts;i++)
			{
				table[i]=NULL;
			}
		}
		void insert(string key,T val)
		{
			int idx=hashFn(key);
			Node<T> *n=new Node<T>(key,val);
			//Insert at head of the linked lists with id=idx
			n->next=table[idx];
			table[idx]=n;
			cs++;
			//Rehashing
			float loadFactor=cs/(1.0*ts);
			if(loadFactor>0.7)
			rehash();
		}
		void print()
		{
			for(int i=0;i<ts;i++)
			{
				cout<<"bucket "<<i<<"-->";
				Node<T>*temp=table[i];
				while(temp!=NULL)
				{
					cout<<temp->key<<"-->";
					temp=temp->next;
				}
				cout<<endl;
			}
			
		}
		
		T* search(string key)
		{
			int idx=hashFn(key);
			Node<T>*temp=table[idx];
			while(temp!=NULL)
			{
				if(temp->key==key)
				{
					return &temp->value;
				}
				temp=temp->next;
			}
			return NULL;
			
		}
		void erase(string key)
		{
			int idx2=hashFn(key);
			Node<T>* temp=table[idx2];
			while(temp!=NULL)
			{
				if(temp->key==key)
				{
					deleteAtMiddle(key);
				}
				temp=temp->next;
			}
		}
		
		
};
int main()
{
	Hashtable<int> priceMenu;
	priceMenu.insert("Burger",120);
	priceMenu.insert("Noodles",100);
	priceMenu.insert("Pepsi",20);
	priceMenu.insert("Hotdog",60);
	priceMenu.insert("Sandwich",1200);
	priceMenu.print();
	
	int *price=priceMenu.search("Noodles");
	if(price==NULL)
	cout<<"NOT FOUND"<<endl;
	else
	cout<<"Price is "<<*price;
}
