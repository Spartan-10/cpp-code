/*Given a collection of intervals, merge all overlapping intervals.

For example:

Given [1,3],[2,6],[8,10],[15,18],

return [1,6],[8,10],[15,18].

Make sure the returned intervals are sorted.

Solution:
*/
/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */

bool cmp( const Interval &a, const Interval &b)
{
    return (a.start < b.start );
}
vector<Interval> Solution::merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<Interval> v;
    
    if(A.size()==0)
        return v;
        
    sort(A.begin(),A.end(),cmp);
    
    v.push_back(A[0]);
    
    for(int i=1;i<A.size();i++)
    {
        if(v.back().end >= A[i].start)
        {
            v.back().end=max(v.back().end,A[i].end);
        }
        else
        {
            v.push_back(A[i]);
        }
    }
    
    return v;
}
