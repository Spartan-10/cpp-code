#include<bits/stdc++.h>
using namespace std;

void strcal(string s)
{
	int n=s.length();
	set<string> st;
	for (int i = 0; i < n; i++) 
        for (int len = 1; len <= n - i; len++)
            {
            	cout << s.substr(i, len) << endl;
            	st.insert(s.substr(i, len));
			}
	
	cout<<st.size();	
}
int main()
{
	string str;
	getline(cin,str);
	strcal(str);
	return 0;
}
