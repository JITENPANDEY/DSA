//brute force
 int count = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
            if(arr[i]+arr[j]=k)
            count++;
            }
        }
        return count;

//optimized

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int,int> s;
        int count = 0;
        for(int i=0;i<n;i++)
        {
            if(s.find(k-arr[i])!=s.end())// if present
            {
                count+=s[k-arr[i]];
                s[arr[i]]++;
            }
            else
            s[arr[i]]++;
        }
        return count;
    }
};
