//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};

Node *insert(Node *tree, int val) {
    Node *temp = NULL;
    if (tree == NULL) return new Node(val);

    if (val < tree->data) {
        tree->left = insert(tree->left, val);
    } else if (val > tree->data) {
        tree->right = insert(tree->right, val);
    }

    return tree;
}


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int ans = INT_MIN;
    
    void solve(Node* node, int &target, bool flag, int sum) {
        
        if(node == NULL) return;
        
        if(node->data == target) flag = 1;
        else sum += (flag == 0) ? node->data : -node->data;
        
        
        if(node->left == NULL && node->right == NULL) {
            if(flag == 1) ans = max(ans, sum);
        }
        else {
            solve(node->left, target, flag, sum);
            solve(node->right, target, flag, sum);
        }
        
    }


    int maxDifferenceBST(Node *root,int target){
        solve(root, target, 0, 0);
        
        if(ans == INT_MIN) return -1;
        else return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node *root = NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            root = insert(root, k);
        }

        int target;
        cin >> target;
        Solution ob;
        cout << ob.maxDifferenceBST(root, target);
        cout << endl;
    }
}
// } Driver Code Ends