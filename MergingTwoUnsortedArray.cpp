#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void buildHeap(int a[],int n)
{
	for(int i=1;i<=n;i++)
	{
		if(a[i]>a[i/2])
		{
			int j=i;
			while(a[j]>a[j/2])
			{
				swap(&a[j],&a[j/2]);
				j=j/2;
				
			}
		}
	}
}
void heapSort(int a[],int n)
{
	buildHeap(a,n);
	for(int i=1;i<=n;i++)
	{
		swap(&a[1],&a[n]);
		n=n-1;
		int j=1,index;
		index=j*2;
		while(index<=n)
		{
			
			
			if(a[index]<a[index+1] && index<i)
			index++;
			
			if(a[index]>a[j]&& index<i)
			swap(&a[index],&a[j]);
			
			j=index;
		}
	}
}
int main()
{
	int a[100],n;
	cout<<"enter the size of the array: ";
	cin>>n;
	cout<<"enter the elemnts: ";
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	heapSort(a,n);
	cout<<"after creating Heap: ";
	for(int i=1;i<=n;i++)
	cout<<a[i]<<" ";
}
