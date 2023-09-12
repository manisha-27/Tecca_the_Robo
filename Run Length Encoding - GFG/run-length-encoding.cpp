//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*You are required to complete this function */

string encode(string src){     
    int i=0,j=0;
    string s="";
    int count=0;
    while(i<src.length()){
        while(src[i]==src[j]){ count++; j++; }
        s+=src[i];
        s+=to_string(count);
        i=j;
        count=0;
    }
    return s;
}     
 
