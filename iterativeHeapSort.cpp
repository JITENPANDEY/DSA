#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void buildHeap(int a[],int index)
{
	int val=a[index];
	while(val>a[index/2] && index>1)
	{
		a[index]=a[index/2];
		index=index/2;
	}
	a[index]=val;	
}
void deleteHeap(int a[],int index, int n)
{
	int val=a[index];
	int j=index*2;//left child
	while(j<=n)
	{
	if(a[j]<a[j+1] && j<n)
	j++;//if left child is smaller than right child than j points to the right child  
	if(a[j]<a[j/2])
	break;
	a[j/2]=a[j];
	j=j*2;
	}
	a[j/2]=val;
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
		buildHeap(a,i);
	}
	cout<<"after creating Heap: ";
	for(int i=1;i<=n;i++)
	cout<<a[i]<<" ";
	int j=n;
	for(int i=1;i<=j;i++)
	{
	int temp=a[1];
	a[1]=a[n];
	a[n]=temp;
	n=n-1;
	deleteHeap(a,1,n);	
	}n=j;
	cout<<"\nafter heap sort : ";
	for(int i=1;i<=n;i++)
	cout<<a[i]<<" ";
}
