/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
class Solution {
public:
    TreeNode* construct(int l,int r,vector<int>& vec){
        if(l>r){
            return NULL;
        }
        int mid=l+(r-l)/2;
        TreeNode* root=new TreeNode(vec[mid]);
        root->left=construct(l,mid-1,vec);
        root->right=construct(mid+1,r,vec);
        return root;

    }


    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> vec;
        while(head!=NULL){
            vec.push_back(head->val);
            head=head->next;
        }
        int l=0;
        int r=vec.size()-1;
        return construct(l,r,vec);
    }
};