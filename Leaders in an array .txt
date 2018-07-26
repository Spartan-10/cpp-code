//Leaders in an array 

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
	    vector<int> v;
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	        
	    int temp=a[n-1];
	    v.push_back(temp);
	    
	    for(int i=n-2;i>=0;i--)
	        if(temp<a[i])
	        {
	            temp=a[i];
	            v.push_back(a[i]);
	        }
	    
	    for(int i=v.size()-1;i>=0;i--)
	        cout<<v[i]<<" ";
	        
	    cout<<endl;
	}
	return 0;
}