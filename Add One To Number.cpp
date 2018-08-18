/*
Given a non-negative number represented as an array of digits,

add 1 to the number ( increment the number represented by the digits ).

The digits are stored such that the most significant digit is at the head of the list.

Example:

If the vector has [1, 2, 3]

the returned vector should be [1, 2, 4]

as 123 + 1 = 124.

 NOTE: Certain things are intentionally left unclear in this question which you should practice asking the interviewer.
For example, for this problem, following are some good questions to ask :
Q : Can the input have 0’s before the most significant digit. Or in other words, is 0 1 2 3 a valid input?
A : For the purpose of this question, YES
Q : Can the output have 0’s before the most significant digit? Or in other words, is 0 1 2 4 a valid output?
A : For the purpose of this question, NO. Even if the input has zeroes before the most significant digit.

Solution:

*/

vector<int> Solution::plusOne(vector<int> &A) {
    A[A.size()-1]++;
    int i=(int)(A.size()-1);
    
    while(i>0 && A[i]==10)
    {
        A[i]=0;
        A[i-1]++;
        i--;
    }
    
    if(A[0]==10)
    {
        A[0]=1;
        A.push_back(0);
    }
    
    int j=0;
    
    while(A[j]==0 && j<A.size())
    {
        j++;
    }
    
    vector<int> B;
    
    for(int i=j;i<A.size();i++)
    {
        B.push_back(A[i]);
    }
    
    return B;
}
