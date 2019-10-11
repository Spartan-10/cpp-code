/*
Given numRows, generate the first numRows of Pascal’s triangle.

Pascal’s triangle : To generate A[C] in row R, sum up A’[C] and A’[C-1] from previous row R - 1.

Example:

Given numRows = 5,

Return

[
     [1],
     [1,1],
     [1,2,1],
     [1,3,3,1],
     [1,4,6,4,1]
]
*/
//Solution:

vector<vector<int> > Solution::solve(int A) {

    vector<vector<int> > v;
    vector<int> v1;
    
    if(A<1)
        return v;
    
    v1.push_back(1);
    v.push_back(v1);
    
    if(A==1)
        return v;
        
    v1.push_back(1);
    v.push_back(v1);
    
    if(A==2)
        return v;
        
        
    for(int i=2;i<A;i++)
    {
        vector<int> v2;
        v2.push_back(1);
        for(int j=1;j<i;j++)
        {
            v2.push_back(v[i-1][j-1]+v[i-1][j]);
        }
        v2.push_back(1);
        v.push_back(v2);
    }
    
    return v;
}
