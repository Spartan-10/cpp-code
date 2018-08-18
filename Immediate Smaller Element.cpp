//Immediate Smaller Element
//Given an integer array, for each element in the array check whether there exist a smaller element on the next immediate position of the array. 
//If it exist print the smaller element. 
//If there is no smaller element on the immediate next to the element then print -1.
/*Input
2
5
4 2 1 5 3
6
5 6 2 3 1 7

Output
2 1 -1 3 -1
-1 2 -1 1 -1 -1
*/
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
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    b[n-1]=-1;
	    for(int i=0;i<n-1;i++)
	    {
	        if(a[i+1]<a[i])
	            b[i]=a[i+1];
	       else
	        b[i]=-1;
	    }
	    
	    for(int i=0;i<n;i++)
	        cout<<b[i]<<" ";
	
	    cout<<"\n";
	}
	return 0;
}