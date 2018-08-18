/* Given an index k, return the kth row of the Pascal’s triangle.

Pascal’s triangle : To generate A[C] in row R, sum up A’[C] and A’[C-1] from previous row R - 1.

Example:

Input : k = 3

Return : [1,3,3,1]
 NOTE : k is 0 based. k = 0, corresponds to the row [1]. 
 
 
 Solution:
 */
 vector<int> Solution::getRow(int A) {
    
    vector<int> v(A+1);
    v[0]=1;
    v[A]=1;
    for(int i=1;i<=A/2;i++)
    {
        v[i]=(v[i-1]*(A-i+1))/i;
        v[A-i]=v[i];
    }
    
    return v;
}
