//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends

string reverseWord(string str){
    
    string rev = "";
    for(int i = str.size()-1;i>=0 ;i--){
        rev += str[i];
    }
    
    return rev;
    
}

