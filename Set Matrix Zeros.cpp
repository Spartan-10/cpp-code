/*Given an m x n matrix of 0s and 1s, if an element is 0, set its entire row and column to 0.

Do it in place.

Example

Given array A as

1 0 1
1 1 1 
1 1 1
On returning, the array A should be :

0 0 0
1 0 1
1 0 1

Solution:
*/


void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int row=A.size();
    int col=A[0].size();
    
    bool first_zero_row=false,first_zero_col=false;
    
    for(int i=0;i<col;i++)
    {
        if(A[0][i]==0)
        {
            first_zero_row=true;
            break;
        }
    }
    
    for(int i=0;i<row;i++)
    {
        if(A[i][0]==0)
        {
            first_zero_col=true;
            break;
        }
    }
    
    for(int i=1;i<row;i++)
    {
        for(int j=1;j<col;j++)
        {
            if(A[i][j]==0)
            {
                A[i][0]=0;
                A[0][j]=0;
            }
        }
    }
    
    for(int i=1;i<row;i++)
    {
        for(int j=1;j<col;j++)
        {
            if(A[i][0]==0 || A[0][j]==0)
                A[i][j]=0;
        }
    }
    
    if(first_zero_row)
    {
        for(int i=0;i<col;i++)
            A[0][i]=0;
    }
    
    if(first_zero_col)
    {
        for(int i=0;i<row;i++)
            A[i][0]=0;
    }
}
