// Rotating an Array


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
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    int d;
	    cin>>d;
	    
	    reverse(a,a+d);
	    reverse(a+d,a+n);
	    reverse(a,a+n);
	    
	    for(int i=0;i<n;i++)
	        cout<<a[i]<<" ";
	   
	    cout<<"\n";
	}
	return 0;
}