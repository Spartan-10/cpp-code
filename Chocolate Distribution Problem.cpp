/*Chocolate Distribution Problem
Given an array A[] of N integers where each value represents number of chocolates in a packet. Each packet can have variable number of chocolates. 
There are m students, the task is to distribute chocolate packets such that :
1. Each student gets one packet.
2. The difference between the number of chocolates given to the students in packet with maximum chocolates and packet with minimum chocolates is minimum.
Input : A[] = {3, 4, 1, 9, 56, 7, 9, 12} 
        m = 5
Output: Minimum Difference is 6
We may pick 3,4,7,9,9 and the output 
is 9-3 = 6
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    cin>>m;
	    
	    sort(a,a+n);
	    int diff,res=INT_MAX;
	    for(int i=0;i+m-1<n;i++)
	    {
	        diff=a[i+m-1]-a[i];
	        if(res>diff)
	            res=diff;
	    }
	    cout<<res<<endl;
	}
	return 0;
}