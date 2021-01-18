// naive

int getInvCount(int arr[], int n) 
{ 
    int inv_count = 0; 
    for (int i = 0; i < n - 1; i++) 
        for (int j = i + 1; j < n; j++) 
            if (arr[i] > arr[j]) 
                inv_count++; 
  
    return inv_count; 
}

//using merge sort : https://www.techiedelight.com/inplace-merge-two-sorted-arrays/

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
#define ll long long int
ll merge(ll arr[],ll temp[], ll low, ll mid, ll high)
{
    ll i=low, j=mid+1, k=low;
    ll count=0;
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j])
        temp[k++]=arr[i++];
        else
        {
            temp[k++]= arr[j++];
            count+= mid - i + 1;
	     // there are mid - i elements that form an inversion
	}
    }
   
    while(i<=mid)
    temp[k++]= arr[i++];
    
    
    for(ll i=low;i<=high;i++)
    arr[i]=temp[i];
    
    return count;
}
ll mergesort(ll arr[],ll temp[],ll low,ll high){
    ll count =0;
    if(low<high)
    {
    	
        ll mid = (low +high)/2;
        
        count+= mergesort(arr,temp,low,mid);
        count+=mergesort(arr,temp,mid+1,high);
        count+=merge(arr,temp,low,mid,high);
    }
    
    return count;
}
long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
    ll temp[N+1];
    for (ll i = 0; i < N; i++)
        temp[i] = arr[i];
        
    return mergesort(arr,temp,0, N-1);
}
int main()
{
	ll arr[] = { 1, 9, 6, 4, 5 };
 
    	ll n = sizeof(arr)/sizeof(arr[0]);
    	
	cout<<inversionCount(arr,n);
	return 0;
}
