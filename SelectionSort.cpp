#include<iostream>
using namespace std;
int Min(int a[],int k, int n)
{
	int min=a[k];
	int j,loc=k;
	for(j=k+1;j<n-1;j++)
	{
		if(min>a[j])
		{
			min=a[j];
			loc=j;
		}
		
	}
	return loc;
}
int main()
{
	int a[100],size,loc,temp,k;
	cout<<"enter the size: ";
	cin>>size;
	cout<<"enter the numbers: ";
	for(int i=0;i<size; i++)
	{
		cin>>a[i];
	}
	for(k=0;k<=size-2;k++)
	{
		loc=Min(a,k,size);
		temp=a[k];
		a[k]=a[loc];
		a[loc]=temp;
	}
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
		
}
