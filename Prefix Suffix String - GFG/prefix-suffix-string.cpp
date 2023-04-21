//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    class TrieNode {
    public:
        bool isEndOfWord;
        TrieNode* children[26];
        TrieNode() {
            isEndOfWord = false;
            for(int i=0; i<26; i++) {
                children[i] = NULL;
            }
        }

        void insert(string s1, TrieNode* root) {
            TrieNode* cur = root;
            for(int i=0; i<s1.length(); i++) {
                int index = s1[i]-'a';
                if(cur->children[index] == NULL) {
                    cur->children[index] = new TrieNode();
                }
                cur = cur->children[index];
            }
            cur->isEndOfWord = true;
        }

        bool search(string s1, TrieNode* root) {
            TrieNode* cur = root;
            for(int i=0; i<s1.length(); i++) {
                int index = s1[i]-'a';
                if(cur->children[index] == NULL) {
                    return false;
                }
                cur = cur->children[index];
            }
            return true;
        }
    };
    
    int prefixSuffixString(vector<string> &s1,vector<string> s2){
        
         TrieNode* root = new TrieNode();

        for(int i=0; i<s1.size(); i++) {
            root->insert(s1[i], root);
            reverse(s1[i].begin(), s1[i].end());
            root->insert(s1[i], root);
        }

        int ans = 0;
        for(int i=0; i<s2.size(); i++) {
            
            string rev=s2[i];
            reverse(rev.begin(), rev.end());
            
                if(root->search(s2[i], root) || root->search(rev, root)) {
                    ans++;
                }
            }
        
        return ans;
    }
};

//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string str1,str2,newline;
        if(i==0)
        getline(cin,newline);
        getline(cin,str1);
        getline(cin,str2);
        // getline(cin,newline);
        // cout<<str1<<endl<<str2<<endl;
        vector<string> s1,s2;
        stringstream ss1(str1);
        stringstream ss2(str2);
        string str;
        while(ss1>>str){
            s1.push_back(str);
        }
        while(ss2>>str){
            s2.push_back(str);
        }
        Solution ob;
        cout<<ob.prefixSuffixString(s1, s2)<<endl;
    }
}
// } Driver Code Ends