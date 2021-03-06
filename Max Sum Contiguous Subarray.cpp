/*Find the contiguous subarray within an array (containing at least one number) which has the largest sum.

For example:

Given the array [-2,1,-3,4,-1,2,1,-5,4],

the contiguous subarray [4,-1,2,1] has the largest sum = 6.

For this problem, return the maximum sum

Solution:
*/
int Solution::maxSubArray(const vector<int> &A) {
    
    int max_sum=INT_MIN;
    int curr_sum=INT_MIN;
    int cumulative=0;
    
    for(int i=0;i<A.size();i++)
    {
        curr_sum=max(curr_sum,A[i]);
        cumulative=cumulative+A[i];
        max_sum=max(cumulative,max_sum);
        
        if(cumulative<0)
        {
            cumulative=0;
        }
    }
    return max(curr_sum,max_sum);
}
