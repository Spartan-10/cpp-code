/*
Given an array A of integers, find the maximum of j - i subjected to the constraint of A[i] <= A[j].

If there is no solution possible, return -1.

Example :

A : [3 5 4 2]

Output : 2 
for the pair (3, 4)
*/
// Solution:

int Solution::maximumGap(const vector<int> &A) {
    
    int len=A.size();
    
    int *left=new int[len];
    int *right=new int[len];
    
    left[0]=A[0];
    right[len-1]=A[len-1];
    
    for(int i=1;i<len;i++)
    {
        left[i]=min(left[i-1],A[i]);
    }
    
    for(int i=len-2;i>=0;i--)
    {
        right[i]=max(right[i+1],A[i]);
    }
    
    int i=0,j=0;
    int diff=-1;
    
    while(i<len && j<len)
    {
        if(left[i]<=right[j])
        {
            diff=max(diff,j-i);
            j++;
        }
        else
        {
            i++;
        }
    }
    
    return diff;
}
