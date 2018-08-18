/*
Find out the maximum sub-array of non negative numbers from an array.
The sub-array should be continuous. That is, a sub-array created by choosing the second and fourth element and skipping the third element is invalid.

Maximum sub-array is defined in terms of the sum of the elements in the sub-array. Sub-array A is greater than sub-array B if sum(A) > sum(B).

Example:

A : [1, 2, 5, -7, 2, 3]
The two sub-arrays are [1, 2, 5] [2, 3].
The answer is [1, 2, 5] as its sum is larger than [2, 3]
NOTE: If there is a tie, then compare with segment's length and return segment which has maximum length
NOTE 2: If there is still a tie, then return the segment with minimum starting index
*/
// Solution:

vector<int> Solution::maxset(vector<int> &A) {
    
    
    long long int max_sum=INT_MIN;
    long long int curr_sum=INT_MIN;
    int srt=0,end=0,count=0,len=0,low=0,high=-1;
    vector<int> B;
    
    for(int i=0;i<A.size();i++)
    {
        if(A[i]>=0)
        {
            srt=i;
            curr_sum=0;
            count=0;
            
            while(A[i]>=0 && i<A.size())
            {
                curr_sum=curr_sum+A[i];
                i++;
            }
            end=i-1;
            
            if((curr_sum>max_sum)||(curr_sum==max_sum && end-srt+1 < len))
            {
                low=srt;
                high=end;
                len=srt+end-1;
                max_sum=curr_sum;
            }
        }
    }
    
    for(int i=low;i<=high;i++)
        B.push_back(A[i]);
    
    
    return B;
}
