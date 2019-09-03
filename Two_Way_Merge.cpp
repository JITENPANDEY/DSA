#include<iostream>
using namespace std;
void mergeArray(int a1[],int a2[],int m,int n, int temp[])
{
	int l1=0,l2=0,index=0;
	while(l1< m && l2<n)
	{
		if(a1[l1]<a2[l2])
		{
			temp[index]=a1[l1];
			l1++;
		}
		else
		{
		temp[index]=a2[l2];
		l2++;	
		}
		index++;
	}
	while(l1<m)
	temp[index++]=a1[l1++];
	
	while(l2<n)
	temp[index++]=a2[l2++];
	
}
int main()
{
	int a1[100],a2[100],temp[200],m,n;
	cout<<"enter the sieze of the first array: ";
	cin>>m;
	cout<<"enter the elements: ";
	for(int i=0;i<m;i++)
	cin>>a1[i];
	cout<<"enter the sieze of the second array: ";
	cin>>n;
	cout<<"enter the elements: ";
	for(int j=0;j<n;j++)
	cin>>a2[j];
	mergeArray(a1,a2,m,n,temp);
	printf("array after quick sort:\n");
	for(int i=0;i<(m+n);i++)
	{
		printf("%d ",temp[i]);
	}
	return 0;
}
