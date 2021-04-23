int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    
    if(A.size()<=1)
    {
        return 0;
    }
    int i;
    int ans=0;
    assert(A.size()==B.size());
    
        for(i=1; i<A.size(); i++)
        {
            ans=ans+max(abs(A[i]-A[i-1]),abs(B[i]-B[i-1]));
        }
        
    return ans;
    
    
}
