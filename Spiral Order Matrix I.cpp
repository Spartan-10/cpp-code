/*Given a matrix of m * n elements (m rows, n columns), return all elements of the matrix in spiral order.

Example:

Given the following matrix:

[
    [ 1, 2, 3 ],
    [ 4, 5, 6 ],
    [ 7, 8, 9 ]
]
You should return

[1, 2, 3, 6, 9, 8, 7, 4, 5]

Solution:
*/
vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    int k=0,l=0;
    int m=A[0].size();
    int n=A.size();
    vector<int> v;
    while(k<m && l<n){
        for(int i=k;i<m;i++){
            v.push_back(A[l][i]);
            //cout<<l<<i<<"#";
        }
        l++;
    
        for(int i=l;i<n;i++){
            v.push_back(A[i][m-1]);
            //cout<<i<<m-1<<"@";
        }
        m--;

        if(l<n){
        for(int i=m-1;i>=k;i--){
            v.push_back(A[n-1][i]);
            //cout<<n-1<<i<<"$";
            }
           }
        n--;
    
        if(k<m){
        for(int i=n-1;i>=l;i--){
            v.push_back(A[i][k]);
            //cout<<i<<k<<"&";
            }
        }
        k++;
    }
    
    return v;
}
