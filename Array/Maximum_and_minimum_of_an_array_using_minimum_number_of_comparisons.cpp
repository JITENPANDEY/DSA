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
pair<int,int> minmax;
pair<int,int> getMinMax(int arr[], int low, int high)
{
	if(low==high)
	{
	minmax.first =arr[0];
	minmax.second = arr[0];
	return minmax;	
	}
	else if( low = high - 1){
		if (arr[0] > arr[1]) 
		{
			minmax.first = arr[0];
		        minmax.second = arr[1];
		} 
	    	lse
	    	{
	        	minmax.first = arr[1];
	        	minmax.second = arr[0];
	    	}
	    	return minmax;
	}
	
	mid = (low + high) / 2; 
    	pair<int,int> mml = getMinMax(arr, low, mid);
    	pair<int,int> mmr = getMinMax(arr, mid + 1, high); 
     
    	// Compare minimums of two parts
    	if (mml.second < mmr.second)
        minmax.second = mml.second;
    	else
        minmax.second = mmr.second;     
     
    	// Compare maximums of two parts
    	if (mml.first > mmr.first)
        minmax.first = mml.first;
    	else
        minmax.first = mmr.first;     
     
   	return minmax;
}
int main()
{
	int arr[] = { 1000, 11, 445,1, 330, 3000 };
    	int arr_size = 6;
     
    	pair<int,int>minmax = getMinMax(arr, 0, arr_size - 1);
                              
    	cout << "Minimum element is "<< minmax.second << endl;
    	cout << "Maximum element is "<< minmax.first;
          
	return 0;
}
