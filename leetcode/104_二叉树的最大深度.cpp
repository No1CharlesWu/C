/*
 * @lc app=leetcode.cn id=104 lang=cpp
 *
 * [104] 二叉树的最大深度
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#include <queue>
using namespace std;
class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        if (root == nullptr)
        {
            return 0;
        }
        int res;
        queue<TreeNode *> q;
        q.push(root);
        for (res = 0;; res++)
        {
            if (q.empty())
            {
                break;
            }
            int count = q.size();
            for (int i = 0; i < count; i++)
            {
                TreeNode *temp = q.front();
                q.pop();
                if (temp->left != nullptr)
                {
                    q.push(temp->left);
                }
                if (temp->right != nullptr)
                {
                    q.push(temp->right);
                }
            }
        }

        return res;
    }
};
