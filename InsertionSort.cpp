#include<iostream>
using namespace std;
void insertionSort(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && temp<a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}
int main()
{
	int a[100],size,loc,temp,k;
	cout<<"enter the size: ";
	cin>>size;
	cout<<"enter the numbers: ";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	insertionSort(a,size);
	cout<<"the sorted array is:\n";
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}	
}
