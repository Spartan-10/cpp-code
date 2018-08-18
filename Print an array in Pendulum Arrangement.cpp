//Print an array in Pendulum Arrangement

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],b[n]={0};
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	    sort(a,a+n);
	    int l,r,mid;
	    l=0;
	    r=n-1;
	    mid=(l+r)/2;
	    l=r=mid;
	    b[mid]=a[0];
	    for(int i=1;i<n;i++)
	    {
	        if(i%2==1)
	        {
	            r++;
	            b[r]=a[i];
	        }
	        else
	        {
	            l--;
	            b[l]=a[i];
	        }
	    }
	    
	    for(int i=0;i<n;i++)
	        cout<<b[i]<<" ";
	        
	   cout<<endl;
	}
	return 0;
}