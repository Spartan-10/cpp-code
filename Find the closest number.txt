//Find the closest number

#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    int diff=abs(k-a[0]);
	    int val=a[0];
	    for(int i=1;i<n;i++)
	    {
	        if(diff>=abs(k-a[i]))
	        {
	            diff=abs(k-a[i]);
	            val=a[i];
	        }
	    }
	    cout<<val<<endl;
	}
	return 0;
}