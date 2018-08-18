/*
Given an array of integers, sort the array into a wave like array and return it, 
In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5.....

Example

Given [1, 2, 3, 4]

One possible answer : [2, 1, 4, 3]
Another possible answer : [4, 1, 3, 2]
 NOTE : If there are multiple answers possible, return the one thats lexicographically smallest. 
So, in example case, you will return [2, 1, 4, 3] 

*/
// Solution:

vector<int> Solution::wave(vector<int> &A) {
    vector<int> v;
    sort(A.begin(),A.end());
    for(int i=1;i<A.size();i+=2)
    {
        v.push_back(A[i]);
        v.push_back(A[i-1]);
    }
    
    if(A.size()%2==1)
      v.push_back(A[A.size()-1]);
        
    return v;
}

