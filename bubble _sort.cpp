#include<iostream>
using namespace std;
void bubble(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<=n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}
		}
	}
}
int main()
{
	int a[100],size;
	cout<<"enter the size: ";
	cin>>size;
	cout<<"enter the numbers: ";
	for(int i=0;i<size; i++)
	{
		cin>>a[i];
	}
	bubble(a,size);
	cout<<"the sorted array is:\n";
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
}
