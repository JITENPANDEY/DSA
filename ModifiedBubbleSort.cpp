#include<iostream>
using namespace std;
void bubble(int a[],int n)
{
	int i,j,temp,flag=0;
	for(i=1;i<=n-1 && flag;i++)
	{
		flag=1;
		for(int j=0;j<=n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
			
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			flag=0;
			}
		}
//		if(flag==0)
//		{
//		cout<<"round="<<i;
//		return;
//		}
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
