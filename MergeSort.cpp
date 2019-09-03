 #include<iostream>
using namespace std;
void merge(int a[], int low, int mid, int high)
{
	int i=low,j=mid+1,index=low,temp[100];
	while(i<=mid && j<=high)
	{
		if(a[i]<a[j])
		{
			temp[index]=a[i];
			i++;
		}
		else
		{
			temp[index]=a[j];
			j++;
		}
		index++;
	}
	if(i>mid)
	{
		while(j<=high)
		{
			temp[index]=a[j];
			j++;
			index++;
		}
	}
	else
	{
		while(i<=mid)
		{
		temp[index]=a[i];
		i++;
		index++;
		}
	}
	for(int k=low;k<index;k++)
	{
		a[k]=temp[k];
	}
}
void mergesort(int a[],int low, int high)
{
	if(low<high)
	{
		int mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		
		merge(a,low, mid, high);
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
	mergesort(a,0,size-1);
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
}
