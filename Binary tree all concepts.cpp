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

    //tree traversals
    //inorder traversal
    void inorder(tree *root)
    {
        if (root == NULL)
            return;
        inorder(root->left);
        cout << root->value << ": ";
        inorder(root->right);
    }
    //preorder traversals
    void preorder(tree *root)
    {
        if (root == NULL)
            return;
        cout << root->value << ": ";
        preorder(root->left);
        preorder(root->right);
    }
    //postorder traversals
    void postorder(tree *root)
    {
        if (root == NULL)
            return;
        postorder(root->left);
        postorder(root->right);
        cout << root->value << ": ";
    }
    //level order traversals
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
    //left viewof a binary tree
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
    //right view traversal
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
    //top view traversal
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
    return 0;
}
