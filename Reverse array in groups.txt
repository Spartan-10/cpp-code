//Reverse array in groups

#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    cin>>k;
	    
	    for(int i=0;i<n;i+=k)
	    {
	       if(i+k<n)
	            reverse(a+i,a+i+k);
	       else 
	            reverse(a+i,a+n);
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}