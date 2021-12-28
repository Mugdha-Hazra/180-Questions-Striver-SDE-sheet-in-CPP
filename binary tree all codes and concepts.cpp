#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

class tree
{
    ll value;
    tree *left;
    tree *right;

public:
    tree(ll val)
    {
        this->value = val;
        this->left = this->right = NULL;
    }
    tree *insert(ll val, tree *root)
    {
        if (root == NULL)
            return new tree(val);
        else if (root->value > val)
            root->left = insert(val, root->left);
        else
            root->right = insert(val, root->right);
        return root;
    }

    // tree traversals
    // inorder traversal
    void inorder(tree *root)
    {
        if (root == NULL)
            return;
        inorder(root->left);
        cout << root->value << ": ";
        inorder(root->right);
    }
    // preorder traversals
    void preorder(tree *root)
    {
        if (root == NULL)
            return;
        cout << root->value << ": ";
        preorder(root->left);
        preorder(root->right);
    }
    // postorder traversals
    void postorder(tree *root)
    {
        if (root == NULL)
            return;
        postorder(root->left);
        postorder(root->right);
        cout << root->value << ": ";
    }
    // level order traversals
    void levelorder(tree *root)
    {
        queue<tree *> q;
        q.push(root);
        while (!q.empty())
        {
            auto temp = q.front();
            q.pop();
            cout << temp->value << ": ";
            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);
        }
    }
    // left viewof a binary tree
    void leftview(tree *root)
    {
        queue<tree *> q;
        q.push(root);
        while (!q.empty())
        {
            int s = q.size();

            for (int i = 1; i <= s; i++)
            {
                auto temp = q.front();
                q.pop();
                if (i == 1)
                    cout << temp->value << ": ";

                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }
        }
    }
    // right view traversal
    void rightview(tree *root)
    {
        queue<tree *> q;
        q.push(root);
        while (!q.empty())
        {
            int s = q.size();

            for (int i = 1; i <= s; i++)
            {
                auto temp = q.front();
                q.pop();
                if (i == s)
                    cout << temp->value << ": ";

                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }
        }
    }
    // top view traversal
    void topview(tree *root)
    {
        map<int, int> mp;
        queue<pair<tree *, int>> q;
        q.push({root, 0});
        while (!q.empty())
        {
            auto temp = q.front();
            q.pop();
            int hd = temp.second;
            auto node = temp.first;
            if (mp.count(hd) == 0)
                mp[hd] = node->value;
            if (node->left)
                q.push({node->left, hd - 1});
            if (node->right)
                q.push({node->right, hd + 1});
        }
        for (auto i : mp)
            cout << i.second << ": ";
    }
    // bottomview traversals
    void bottomview(tree *root)
    {
        map<int, int> mp;
        queue<pair<tree *, int>> q;
        q.push({root, 0});
        while (!q.empty())
        {
            auto temp = q.front();
            q.pop();
            int hd = temp.second;
            auto node = temp.first;
            mp[hd] = node->value;
            if (node->left)
                q.push({node->left, hd - 1});
            if (node->right)
                q.push({node->right, hd + 1});
        }
        for (auto i : mp)
            cout << i.second << ": ";
    }
    // maximum height of a tree

    ll maxDepth(tree *root)
    {
        if (root == NULL)
            return 0;
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
    // conversion of sorted array to height balanced bst.
    tree *array_to_bst(ll *a, int s, int e)
    {
        if (s > e)
            return NULL;
        ll m = (s + e) / 2;
        tree *root = new tree(a[m]);
        root->left = array_to_bst(a, s, m - 1);
        root->right = array_to_bst(a, m + 1, e);
        return root;
    }
    // construct a tree form inorder and preorer traversal
    tree *create_tree_preorder_inorder(int &pre_idx, ll st, ll end, ll *pre, auto &mp)
    {
        if (st > end)
            return NULL;
        tree *root = new tree(pre[pre_idx]);
        int idx = mp[pre[pre_idx]];
        pre_idx++;
        root->left = create_tree_preorder_inorder(pre_idx, st, idx - 1, pre, mp);
        root->right = create_tree_preorder_inorder(pre_idx, idx + 1, end, pre, mp);
        return root;
    }
    // identical tree
    bool is_identical_trees(tree *root1, tree *root2)
    {
        // BOTH trees are empty
        if (root1 == NULL and root2 == NULL)
            return true;
        if (root1 == NULL or root2 == NULL)
            return false;
        if (root1->value != root2->value)
            return false;
        return is_identical_trees(root1->left, root2->left) and is_identical_trees(root1->right, root2->right);
    }
    // mirror tree
    bool is_mirror_tree(tree *root1, tree *root2)
    {
        // BOTH trees are empty
        if (root1 == NULL and root2 == NULL)
            return true;
        if (root1 == NULL or root2 == NULL)
            return false;
        if (root1->value != root2->value)
            return false;
        return is_mirror_tree(root1->left, root2->right) and is_mirror_tree(root1->right, root2->left);
    }
};

int main()
{
    cout << "Binary tree all programs!\n";
    tree *root = NULL;
    root = root->insert(7, root);
    root = root->insert(5, root);
    root = root->insert(8, root);
    root = root->insert(4, root);
    root = root->insert(6, root);
    root = root->insert(9, root);
    root = root->insert(70, root);
    root = root->insert(90, root);
    cout << "Inorder Traversal (l Root R ) : ";
    root->inorder(root);
    cout << "\nPreorder Traversal (ROOT L R) : ";
    root->preorder(root);
    cout << "\npostorder Traversal (L R ROOT) : ";
    root->postorder(root);
    cout << "\nLevel order Traversal (Level wise) : ";
    root->levelorder(root);
    cout << "\nLeft view Traversal ( each 1st element of Level wise) : ";
    root->leftview(root);
    cout << "\nright view Traversal ( each last element of Level wise) : ";
    root->rightview(root);
    cout << "\ntop view Traversal ( top view ) : ";
    root->topview(root);
    cout << "\nbottom view Traversal ( bottom view ) : ";
    root->bottomview(root);
    cout << "\nHeight of binary tree :" << root->maxDepth(root);
    cout << "\nArray to Bst:\n ";
    ll a[] = {
        1,
        23,
        50,
        66,
        78,
        89,
        90,
        100,
    };
    tree *root1 = NULL;
    root1 = root1->array_to_bst(a, 0, 7);
    root1->inorder(root1);
    ll in[] = {3, 1, 4, 0, 5, 2};
    ll pre[] = {0, 1, 3, 4, 2, 5};
    unordered_map<int, int> m;
    for (int i = 0; i < 6; i++)
        m[in[i]] = i;
    int pre_idx = 0;
    tree *root2 = NULL;
    root2 = root2->create_tree_preorder_inorder(pre_idx, 0, 5, pre, m);
    cout << "\nCreate tree in order preorder" << endl;
    root2->levelorder(root2);
    return 0;
}
