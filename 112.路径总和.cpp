/*
 * @lc app=leetcode.cn id=112 lang=cpp
 *
 * [112] 路径总和
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };
// #include <vector>
// using namespace std;
// class Solution {
// public:
//     bool isLeaf(TreeNode* treeNode) {
//         if (treeNode->left == nullptr && treeNode->right == nullptr) {
//             return true;
//         } else {
//             return false;
//         }
//     }

//     void DFS(TreeNode* treeNode, vector<int>& record, int& partialSum) {
//         partialSum += treeNode->val;
//         if (isLeaf(treeNode)) {
//             record.push_back(partialSum);
//         } else {
//             DFS(treeNode->left, record, partialSum);
//             DFS(treeNode->right, record, partialSum);
//         }
//     }

//     bool hasPathSum(TreeNode* root, int targetSum) {
//         if (isLeaf(root)) {
//             return false;
//         } else {
//             vector<int> record;
//             int partialSum = 0;
//             DFS(root, record, partialSum);
//             for (auto i : record) {
//                 if (targetSum == record.at(i)) {
//                     return true;
//                 }
//             }
//             return false;
//         }
//     }
// };
// I am so stupid.

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) {
            return false;
        }
        if (root->left == nullptr && root->right == nullptr) {
            return root->val == targetSum;
        } else {
            return hasPathSum(root->left, targetSum-root->val) || hasPathSum(root->right, targetSum-root->val);
        }
    }
};

// @lc code=end

