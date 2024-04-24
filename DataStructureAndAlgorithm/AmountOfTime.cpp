#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode *fa[100001];

class Solution
{
    int start;
    TreeNode *start_node;

    // dfs寻找start
    void dfs(TreeNode *root, TreeNode *from)
    {
        if (root == nullptr)
        {
            return;
        }
        fa[root->val] = from;
        if (root->val == start)
        {
            start_node = root;
        }
        dfs(root->left, root);
        dfs(root->right, root);
    }

    // 以start_node为根节点的最大深度
    // 传入from是为了防止节点重复访问
    int maxDepth(TreeNode *root, TreeNode *from)
    {
        if (root == nullptr)
        {
            return -1;
        }
        int res = -1;// 设置为-1，是start_node为第0层
        if (root->left != from)
        {
            res = max(res, maxDepth(root->left, root));
        }
        if (root->right != from)
        {
            res = max(res, maxDepth(root->right, root));
        }
        if (fa[root->val] != from)
        {
            res = max(res, maxDepth(fa[root->val], root));
        }
        return res + 1;
    }

public:
    int amountOfTime(TreeNode *root, int start)
    {
        this->start = start;
        dfs(root, nullptr);
        return maxDepth(start_node, start_node);
    }
};