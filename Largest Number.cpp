/*
Given a list of non negative integers, arrange them such that they form the largest number.

For example:

Given [3, 30, 34, 5, 9], the largest formed number is 9534330.

Note: The result may be very large, so you need to return a string instead of an integer.

Solution:
*/

string sort(vector <int> A);
int comp (string a,string b)
{
    return a+b > b+a;
}

string Solution::largestNumber(const vector<int> &A) {
    
    vector<string> A1;
    bool set=true;
    
    for(int i=0;i<A.size();i++)
    {
        A1.push_back(to_string(A[i]));
        if(A[i]!=0)
            set=false;
    }
    
    if(set)
        return "0";
        
    sort(A1.begin(),A1.end(),comp);
    
    string res_string="";
    
    for(int i=0;i<A1.size();i++)
    {
        res_string+=A1[i];
    }
    
    return res_string;
}
