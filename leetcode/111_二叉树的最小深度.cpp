/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
 */
/**
 * Definition for a binary tree node.
 */
// struct TreeNode
// {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };

#include <queue>
using namespace std;
class Solution
{
public:
    int minDepth(TreeNode *root)
    {
        if (root == nullptr)
        {
            return 0;
        }
        queue<TreeNode *> T;
        T.push(root);
        int res;
        for (res = 1;; res++)
        {
            int count = T.size();
            for (int i = 0; i < count; i++)
            {
                TreeNode *tNode = T.front();
                T.pop();
                if (tNode->left == nullptr && tNode->right == nullptr)
                {
                    return res;
                }
                if (tNode->left != nullptr)
                {
                    T.push(tNode->left);
                }
                if (tNode->right != nullptr)
                {
                    T.push(tNode->right);
                }
            }
        }
    }
};
