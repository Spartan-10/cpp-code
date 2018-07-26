// Rotate Array by n elements

#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int d;
	    cin>>d;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   
	    reverse(a,a+d);
	    reverse(a+d,a+n);
	    reverse(a,a+n);
	    
	    for(int i=0;i<n;i++)
	        cout<<a[i]<<" ";
	   
	    cout<<"\n";
	}
	return 0;
}