class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int> v;
            int i=0,j=0,k=0;
            while(i<n1 && j<n2 && k<n3){
                if(A[i]==B[j] && B[j]==C[k] )
                {
                    if(v.size()==0)
                    {
                        v.push_back(A[i]);
                    }
                    else{
                        if(v.back()!=A[i])
                        v.push_back(A[i]);
                    }
                i++;
                j++;
                k++;
                }
                else{
                    if((A[i] <= B[j] && A[i] < C[k]) ||(A[i] <= C[k] && A[i]<B[j]))
                    i++;
                    else  if((B[j] <= A[i] && B[j] < C[k]) ||(B[j] <= C[k] && B[j]<A[i]))
                    j++;
                    else
                    k++;
                }
            }
            return v;
        }

};
