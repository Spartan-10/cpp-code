/*Given an integer n, generate a square matrix filled with elements from 1 to n2 in spiral order.

Example:

Given n = 3,

You should return the following matrix:

[
  [ 1, 2, 3 ],
  [ 8, 9, 4 ],
  [ 7, 6, 5 ]
]


Solution:
*/
vector<vector<int> > Solution::generateMatrix(int A) {
    
    vector<vector<int>> B(A,vector<int>(A));
    
    if(A==0)
        return B;
    
    int xsrt=0,ysrt=0;
    int xend=A-1,yend=A-1;
    int k=1;
    
    while(k<=(A*A))
    {
        for(int i=ysrt;i<=yend;i++)
        {
            B[xsrt][i]=k;
            k++;
        }
        xsrt++;
        for(int i=xsrt;i<=xend;i++)
        {
            B[i][yend]=k;
            k++;
        }
        yend--;
        for(int i=yend;i>=ysrt;i--)
        {
            B[xend][i]=k;
            k++;
        }
        xend--;
        for(int i=xend;i>=xsrt;i--)
        {
            B[i][ysrt]=k;
            k++;
        }
        ysrt++;
    }
    
    return B;
}
