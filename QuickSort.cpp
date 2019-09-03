#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int a[],int low,int high)
{
	int pivot=a[low];
	int i=low;
	int j=high;
	while(i<j)
	{
		while(a[i]<=pivot)
		{
			i++;
		}
		while(a[j]>pivot)
		{
			j--;
		}
		if(i<j)
		swap(&a[i],&a[j]);
	}
//	a[low]=a[j];
//	a[j]=pivot;
	swap(&a[j],&a[low]);
	return j;
	
}
void quicksort(int a[],int low, int high)
{
	if(low<high)
	{
		int pi=partition(a,low,high);
		quicksort(a,low,pi-1);
		quicksort(a,pi+1,high);
	}
}
int main()
{
	int a[100],size;
	cout<<"enter the size: ";
	cin>>size;
	cout<<"enter the numbers: ";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	quicksort(a,0,size-1);
	cout<<"the sorted array is:\n";
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
}
