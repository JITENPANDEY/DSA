// Author : Jiten Pandey
// Submitted on :

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
#define ld long double
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fr(i,a,b) for(ll i=b-1;i>=a;i--)
#define in(a) cin>>a
#define out(b) cout<<b
#define v(type) vector<type>v
#define m(type1,type2) map<type1,type2>m

void unionFun(int arr1[],int n,int arr2[],int m)
{
	int i=0;int j=0;
	while(i<n && j<m)
	{
		while(arr1[i]==arr1[i+1])
		i++;
		
		while(arr2[j]==arr2[j+1])
		j++;
		
		if(arr1[i]<arr2[j])
		cout<<arr1[i++]<<" ";
		else if(arr1[i]>arr2[j])
		cout<<arr2[j++]<<" ";
		else{
		cout<<arr1[i++]<<" ";
		j++;	
		}
	}
	while(i<n)
	cout<<arr1[i++]<<" ";
	while(j<m)
	cout<<arr2[j++]<<" ";
}
int main()
{
	int arr1[] = { 2,2,2,2,2,2 }; 
    	int arr2[] = { 2, 3, 5, 7 }; 
  
    	int n = sizeof(arr1) / sizeof(arr1[0]); 
    	int m = sizeof(arr2) / sizeof(arr2[0]); 
  
    	// Function calling 
    	unionFun(arr1,  n,arr2, m); 
  
    	return 0; 
}
