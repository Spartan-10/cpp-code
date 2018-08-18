/*
Given an unsorted integer array, find the first missing positive integer.

Example:

Given [1,2,0] return 3,

[3,4,-1,1] return 2,

[-8, -7, -6] returns 1

Your algorithm should run in O(n) time and use constant space.

Solution:
*/

int Solution::firstMissingPositive(vector<int> &A) {
    
    int index=0;
    
    for(int i=0;i<A.size();i++)
    {
        if(A[i]>0)
        {
            swap(A[i],A[index]);
            index++;
        }
    }
    
    for(int i=0;i<index;i++)
    {
        if(abs(A[i])< index && A[abs(A[i])]>0)
        {
            A[abs(A[i])]=-A[abs(A[i])];
        }
    }

    for(int i=1;i<index;i++)
    {
        if(A[i]>0)
            return i;
    }
    
    return index+1;
}

