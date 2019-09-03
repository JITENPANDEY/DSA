#include<iostream>
using namespace std;
int maxSubArraySum(int a[], int n)
{
	int start=0,end=0,s=0;
	int curr_sum=0;
	int max_sum=INT_MIN;
	
	for(int i=0;i<n;i++)
	{
		curr_sum+=a[i];
		if(curr_sum<0)
		{
		s=i+1;
		curr_sum=0;
		}
		
		if(curr_sum > max_sum)
		{
		max_sum=curr_sum;
		start=s;
		end=i;
		}
	}
	cout<<"the subarray is: \n";
	for(int i=start;i<=end;i++)
	cout<<a[i]<<" ";
	return max_sum;
	
}
int main()
{
 	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3}; 
	int n = sizeof(a)/sizeof(a[0]); 
	int max_sum = maxSubArraySum(a, n);
	cout<<"\nmax sum of contiguous subarray: "<<max_sum; 
	return 0; 
}
