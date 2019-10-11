/*
Given an integer array, find if an integer p exists in the array such that the number of integers greater than p in the array equals to p
If such an integer is found return 1 else return -1.
*/
// Solution:

int Solution::solve(vector<int> &A) {

    int len=A.size();
    
    sort(A.begin(),A.end());
    
    for(int i=0;i<len-1;i++)
    {
        if(A[i]==A[i+1])
            continue;
        
        if(A[i]== len-i-1)
            return 1;
    }
    if(A[len-1]==0)
        return 1;
    return -1;
}
